#include "map_editor.h"
#include "ui_map_editor.h"
#include "mainwindow.h"
Map_editor::Map_editor(MainWindow *parent) :QWidget(parent),ui(new Ui::Map_editor),mainwindow(parent){
    ui->setupUi(this);
    map.push_back(new QPixmap(actual_map.width,actual_map.height));
    ui->label->setPixmap(*map.last());
    bool ** map=new bool*[actual_map.height];
    for(int i=0;i<actual_map.height;i++){
        map[i]=new bool[actual_map.width];
        for(int j=0;j<actual_map.width;j++)map[i][j]=false;
    }
    access.push_back(map);
}
Map_editor::~Map_editor(){
    delete ui;
    for(auto x:access){
        for(int i=0;i<actual_map.height;i++){
            delete[] x[i];
        }
        delete[] x;
    }
    for(auto x:map)delete x;
}
void Map_editor::save(QString path){
    QFile file(path+".jpg");
    file.open(QIODevice::WriteOnly);
    map.last()->save(&file,"jpg");
    file.close();
    std::ofstream str;
    str.open(path.toStdString()+"access.bin",std::ofstream::out | std::ofstream::app);
    for(int i=0;i<actual_map.height;i++){
        for(int j=0;j<actual_map.width;j++){
            if(access.last()[i][j]==true){
                str<<1;
            }
            else {
                str<<0;
            }
        }
        str<<std::endl;
    }
    str.close();
}
void Map_editor::load(QString path){}
void Map_editor::set_terrain(Terrain terrain){
    this->terrain=terrain;
    if(this->terrain==Terrain::rock){
        terrain_image.load(":/base/rock.jpg");
        qDebug()<<"Rock";
    }
    else if(this->terrain==Terrain::grass){
        terrain_image.load(":/base/grass.jpg");
        qDebug()<<"Grass";
    }
    else if(this->terrain==Terrain::sand){
        terrain_image.load(":/base/sand.jpg");
        qDebug()<<"Sand";
    }
    else{
        terrain_image.load(":/base/water.jpg");
        qDebug()<<"Water";
    }
}
void Map_editor::mousePressEvent(QMouseEvent *event){area_fill(event->pos().x(),event->pos().y());}
void Map_editor::mouseMoveEvent(QMouseEvent *event){area_fill(event->pos().x(),event->pos().y());}
void Map_editor::full_fill(){
    QImage actual_image=map.last()->toImage();
    for(int wid=0;wid<actual_image.width();wid++){
        for(int hei=0;hei<actual_image.height();hei++){
            QColor pix_color(terrain_image.pixel(wid%30,hei%30));
            actual_image.setPixel(wid,hei,pix_color.rgb());
        }
    }
    QPixmap actual_pixmap=QPixmap::fromImage(actual_image);
    *map.last()=actual_pixmap;
    ui->label->setPixmap(*map.last());
}
void Map_editor::area_fill(int x, int y){
    x/=30;
    x*=30;
    y/=30;
    y*=30;
    QPixmap * pixmap=new QPixmap(actual_map.width,actual_map.height);
    *pixmap=(*map.last());
    map.push_back(pixmap);
    bool ** map_a=new bool*[actual_map.height];
    for(int i=0;i<actual_map.height;i++){
        map_a[i]=new bool[actual_map.width];
        for(int j=0;j<actual_map.width;j++){
            map_a[i][j]=access.last()[i][j];
        }
    }
    access.push_back(map_a);
    QImage actual_image=map.last()->toImage();
    for(int hei=y;hei<y+30;hei++)
        for(int wid=x;wid<x+30;wid++){
            QColor pix_color(terrain_image.pixel(wid%30,hei%30));
            actual_image.setPixel(wid,hei,pix_color.rgb());
            if(terrain!=Terrain::water)access.last()[hei][wid]=true;
            else access.last()[hei][wid]=false;
        }
    QPixmap actual_pixmap=QPixmap::fromImage(actual_image);
    *map.last()=actual_pixmap;
    ui->label->setPixmap(*map.last());
}
void Map_editor::keyPressEvent(QKeyEvent *event){
    qDebug()<<char(event->key());
}
void Map_editor::newmap(){
    for(auto x:access){
        for(int i=0;i<actual_map.height;i++)delete []x[i];
        delete[] x;
    }
    access.clear();
    for(auto x:map)delete x;
    map.clear();
    actual_map=New_map::get_map(mainwindow);
    if(actual_map.width<720&&actual_map.height<600){
        resize(actual_map.width,actual_map.height);
        ui->label->resize(actual_map.width,actual_map.height);
    }
    else if(actual_map.width>=720&&actual_map.height<600){
        resize(720,actual_map.height);
        ui->label->resize(720,actual_map.height);
    }

    else if(actual_map.width<720&&actual_map.height>=600){
        resize(actual_map.width,600);
        ui->label->resize(actual_map.width,600);}

    else{
        resize(720,600);
        ui->label->resize(720,600);
    }
    map.push_back(new QPixmap(actual_map.width,actual_map.height));
    if(actual_map.terrain==Terrain::rock){
        //map.last()->fill(Qt::gray);
        terrain_image.load(":/base/rock.jpg");
    }
    else if(actual_map.terrain==Terrain::grass){
        //map.last()->fill(Qt::green);
        terrain_image.load(":/base/grass.jpg");
    }
    else if(actual_map.terrain==Terrain::sand){
        //map.last()->fill(Qt::yellow);
        terrain_image.load(":/base/sand.jpg");
    }
    else{
        //map.last()->fill(Qt::blue);
        terrain_image.load(":/base/water.jpg");
    }
    full_fill();
    bool ** map_a=new bool*[actual_map.height];
    for(int i=0;i<actual_map.height;i++){
        map_a[i]=new bool[actual_map.width];
        for(int j=0;j<actual_map.width;j++){
            if(actual_map.terrain==Terrain::water) map_a[i][j]=false;
            else map_a[i][j]=true;
        }
    }
    access.push_back(map_a);
}
void Map_editor::backward(){
    qDebug()<<"Backward";
}
