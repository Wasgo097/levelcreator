#include "mainwindow.h"
#include "ui_mainwindow.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),ui(new Ui::MainWindow){
    ui->setupUi(this);
    ui->statusBar->hide();
    ui->mainToolBar->hide();
    mapeditor=std::make_unique<Map_editor>(this);
    mapeditor->move(0,20);
    connect(ui->menuBar->actions().first()->menu()->actions().first(),SIGNAL(triggered(bool)),this,SLOT(newmap()));
    connect(ui->menuBar->actions().first()->menu()->actions().operator[](1),SIGNAL(triggered(bool)),this,SLOT(save()));
    connect(ui->menuBar->actions().first()->menu()->actions().operator[](2),SIGNAL(triggered(bool)),this,SLOT(load()));
    connect(ui->menuBar->actions().first()->menu()->actions().operator[](3),SIGNAL(triggered(bool)),this,SLOT(forward()));
    connect(ui->menuBar->actions().first()->menu()->actions().operator[](4),SIGNAL(triggered(bool)),this,SLOT(backward()));
}
MainWindow::~MainWindow(){
    delete ui;
}
void MainWindow::set_terrain(Terrain terrain){
    mapeditor->set_terrain(terrain);
}
void MainWindow::save(){
    QString path = QFileDialog::getSaveFileName(this,"Zapisz mapę");
    mapeditor->save(path);
}
void MainWindow::load(){
    QString sciezka = QFileDialog::getOpenFileName(this,"Wczytaj mapę",QString(),"Images (*.jpg)");
    qDebug()<<sciezka;
}
void MainWindow::newmap(){
    mapeditor->newmap();
}
void MainWindow::backward(){
    mapeditor->backward();
}
void MainWindow::forward(){
    qDebug()<<"Forward";
}
void MainWindow::on_grass_clicked(){
    mapeditor->set_terrain(Terrain::grass);
}
void MainWindow::on_rock_clicked(){
    mapeditor->set_terrain(Terrain::rock);
}
void MainWindow::on_sand_clicked(){
    mapeditor->set_terrain(Terrain::sand);
}
void MainWindow::on_water_clicked(){
    mapeditor->set_terrain(Terrain::water);
}
void MainWindow::keyPressEvent(QKeyEvent *event){
    if(event->key() == Qt::Key_W||event->key() == Qt::Key_S||event->key() == Qt::Key_A||event->key() == Qt::Key_D)mapeditor->keyPressEvent(event);
}
