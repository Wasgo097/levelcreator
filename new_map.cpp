#include "new_map.h"
#include "ui_new_map.h"
#include "mainwindow.h"
New_map::New_map(MainWindow *parent) :QDialog(parent),ui(new Ui::New_map){
    ui->setupUi(this);
}
Map_option New_map::get_map(MainWindow *parent){
    New_map map(parent);
    map.ui->terrain->addItem("Grass");
    map.ui->terrain->addItem("Rock");
    map.ui->terrain->addItem("Sand");
    map.ui->terrain->addItem("Water");
    map.exec();
    return Map_option(30*map.ui->width->text().toInt(),30*map.ui->height->text().toInt(),Terrain(map.ui->terrain->currentIndex()));
}
New_map::~New_map(){
    delete ui;
}
void New_map::on_Set_clicked(){
    done(1);
}
