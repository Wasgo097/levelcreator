#ifndef MAP_EDITOR_H
#define MAP_EDITOR_H
#include <QWidget>
#include <QDebug>
#include <QMouseEvent>
#include <QKeyEvent>
#include <QFileDialog>
#include <QPixmap>
#include <fstream>
#include "global_class.h"
namespace Ui {class Map_editor;}
class MainWindow;
class Map_editor : public QWidget{
    Q_OBJECT
public:
    explicit Map_editor(MainWindow *parent = nullptr);
    ~Map_editor();
    void save(QString path);
    void load(QString path);
    void set_terrain(Terrain terrain);
    void newmap();
    void backward();
    void forward();
    void keyPressEvent(QKeyEvent *event)override;
private:
    MainWindow * mainwindow;
    Ui::Map_editor *ui;
    QList<QPixmap*> map;
    QList<bool**> access;
    Map_option actual_map;
    Terrain terrain;
    QImage terrain_image;
    void full_fill();
    void area_fill(int x,int y);
protected:
    void mousePressEvent(QMouseEvent* )override;
    void mouseMoveEvent(QMouseEvent* )override;
};
#endif // MAP_EDITOR_H
