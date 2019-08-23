#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QFileDialog>
#include <QMouseEvent>
#include <QPixmap>
#include <QImage>
#include <QDebug>
#include <memory>
#include <fstream>
#include "mainpanel.h"
#include "map_editor.h"
#include "new_map.h"
#include "global_class.h"
namespace Ui {class MainWindow;}
class MainWindow : public QMainWindow{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void set_terrain(Terrain);
private:
    Ui::MainWindow *ui;
    std::unique_ptr<Mainpanel> mainpanel;
    std::unique_ptr<Map_editor> mapeditor;
    QList<QPixmap*> map;
    QList<bool**> access;
    size_t actual_index=0;
    Map_option actual_map;
    Terrain terrain;
    QImage terrain_image;
    void full_fill();
    void area_fill(int x,int y);
    void mousePressEvent(QMouseEvent* )override;
private slots:
    void save();
    void load();
    void newmap();
    void backward();
    void forward();
};
#endif // MAINWINDOW_H
