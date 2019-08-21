#include "mainpanel.h"
#include "ui_mainpanel.h"
#include "mainwindow.h"
Mainpanel::Mainpanel(MainWindow *parent) :QWidget(parent),ui(new Ui::Mainpanel),window(parent){
    ui->setupUi(this);
}
Mainpanel::~Mainpanel(){
    delete ui;
}
void Mainpanel::on_grass_clicked(){
    window->set_terrain(Terrain::grass);
}
void Mainpanel::on_wather_clicked(){
    window->set_terrain(Terrain::water);
}
void Mainpanel::on_rock_clicked(){
    window->set_terrain(Terrain::rock);
}
void Mainpanel::on_sand_clicked(){
    window->set_terrain(Terrain::sand);
}
void Mainpanel::on_tree_clicked(){
    window->set_terrain(Terrain::tree);
}
