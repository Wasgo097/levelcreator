#include "mainwindow.h"
#include "ui_mainwindow.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),ui(new Ui::MainWindow){
    ui->setupUi(this);
    ui->statusBar->hide();
    ui->mainToolBar->hide();
    mainpanel=std::make_unique<Mainpanel>(this);
    mainpanel->move(733,15);
    mapeditor=std::make_unique<Map_editor>(this);
    mapeditor->move(0,0);
    connect(ui->menuBar->actions().first()->menu()->actions().first(),SIGNAL(triggered(bool)),this,SLOT(newmap()));
    connect(ui->menuBar->actions().first()->menu()->actions().operator[](1),SIGNAL(triggered(bool)),this,SLOT(save()));
    connect(ui->menuBar->actions().first()->menu()->actions().operator[](2),SIGNAL(triggered(bool)),this,SLOT(load()));
    connect(ui->menuBar->actions().first()->menu()->actions().operator[](3),SIGNAL(triggered(bool)),this,SLOT(forward()));
    connect(ui->menuBar->actions().first()->menu()->actions().operator[](4),SIGNAL(triggered(bool)),this,SLOT(backward()));
    map.push_back(new QPixmap(actual_map.width,actual_map.height));
    ui->label->setPixmap(*map[actual_index]);
    bool ** map=new bool*[actual_map.height];
    for(int i=0;i<actual_map.height;i++){
        map[i]=new bool[actual_map.width];
        for(int j=0;j<actual_map.width;j++)map[i][j]=false;
    }
    access.push_back(map);
}
MainWindow::~MainWindow(){
    delete ui;
    for(auto x:access){
        for(int i=0;i<actual_map.height;i++){
            delete[] x[i];
        }
        delete[] x;
    }
    for(auto x:map)delete x;
}
void MainWindow::set_terrain(Terrain terrain){
    this->terrain=terrain;
    if(this->terrain==Terrain::rock){
        terrain_image.load(":/base/rock.jpg");
    }
    else if(this->terrain==Terrain::grass){
        terrain_image.load(":/base/grass.jpg");
    }
    else if(this->terrain==Terrain::sand){
        terrain_image.load(":/base/sand.jpg");
    }
    else{
        terrain_image.load(":/base/water.jpg");
    }
}
void MainWindow::full_fill(){
    QImage actual_image=map[actual_index]->toImage();
    for(int wid=0;wid<actual_image.width();wid++){
        for(int hei=0;hei<actual_image.height();hei++){
            QColor pix_color(terrain_image.pixel(wid%30,hei%30));
            actual_image.setPixel(wid,hei,pix_color.rgb());
        }
    }
    QPixmap actual_pixmap=QPixmap::fromImage(actual_image);
    *map[actual_index]=actual_pixmap;
}
void MainWindow::area_fill(int x, int y){
    x/=30;
    x*=30;
    y/=30;
    y*=30;
    QImage actual_image=map[actual_index]->toImage();
    for(int wid=x;wid<x+30;wid++){
        for(int hei=y;hei<y+30;hei++){
            QColor pix_color(terrain_image.pixel(wid%30,hei%30));
            actual_image.setPixel(wid,hei,pix_color.rgb());
        }
    }
    QPixmap actual_pixmap=QPixmap::fromImage(actual_image);
    *map[actual_index]=actual_pixmap;
}
void MainWindow::mousePressEvent(QMouseEvent *event){
    qDebug()<<event->pos().x();
    qDebug()<<event->pos().y();
}
void MainWindow::save(){
    QString path = QFileDialog::getSaveFileName(this,"Zapisz mape");
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
void MainWindow::load(){
    qDebug()<<"Load";
}
void MainWindow::newmap(){
     for(auto x:access){
         for(int i=0;i<actual_map.height;i++){
             delete []x[i];
         }
         delete[] x;
     }
     access.clear();
     for(auto x:map)delete x;
     map.clear();
     actual_map=New_map::get_map(this);
     actual_index=0;
     map.push_back(new QPixmap(actual_map.width,actual_map.height));
     if(actual_map.terrain==Terrain::rock){
         map[actual_index]->fill(Qt::gray);
         terrain_image.load(":/base/rock.jpg");
     }
     else if(actual_map.terrain==Terrain::grass){
         map[actual_index]->fill(Qt::green);
         terrain_image.load(":/base/grass.jpg");
     }
     else if(actual_map.terrain==Terrain::sand){
         map[actual_index]->fill(Qt::yellow);
         terrain_image.load(":/base/sand.jpg");
     }
     else{
         map[actual_index]->fill(Qt::blue);
         terrain_image.load(":/base/water.jpg");
     }
     full_fill();
     //set_terrain(Terrain::water);
     //area_fill(20,20);
     ui->label->setPixmap(*map[actual_index]);
     bool ** map=new bool*[actual_map.height];
     for(int i=0;i<actual_map.height;i++){
         map[i]=new bool[actual_map.width];
         for(int j=0;j<actual_map.width;j++){
             if(actual_map.terrain==Terrain::water) map[i][j]=false;
             else map[i][j]=true;
         }
     }
     access.push_back(map);
}
void MainWindow::backward(){
    qDebug()<<"Backward";
}
void MainWindow::forward(){
    qDebug()<<"Forward";
}
