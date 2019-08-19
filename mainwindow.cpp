#include "mainwindow.h"
#include "ui_mainwindow.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),ui(new Ui::MainWindow){
    ui->setupUi(this);
    ui->statusBar->hide();
    ui->mainToolBar->hide();
    mainpanel=std::make_unique<Mainpanel>(this);
    mainpanel->move(733,20);
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
    actual_terrain=terrain;
}
void MainWindow::save(){
    qDebug()<<"Save";
}
void MainWindow::load(){
    qDebug()<<"Load";
}
void MainWindow::newmap(){
     qDebug()<<"New map";
}
void MainWindow::backward(){
    qDebug()<<"Backward";
}
void MainWindow::forward(){
    qDebug()<<"Forward";
}
