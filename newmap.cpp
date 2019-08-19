#include "newmap.h"
#include "ui_newmap.h"
#include "mainwindow.h"
Newmap::Newmap(MainWindow *parent) :
    QWidget(parent),ui(new Ui::Newmap){
    ui->setupUi(this);
}
Newmap::~Newmap(){
    delete ui;
}
