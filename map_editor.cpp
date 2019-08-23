#include "map_editor.h"
#include "ui_map_editor.h"

Map_editor::Map_editor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Map_editor)
{
    ui->setupUi(this);
}

Map_editor::~Map_editor()
{
    delete ui;
}
