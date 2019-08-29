#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QImage>
#include <QDebug>
#include <memory>
#include "map_editor.h"
#include "new_map.h"
namespace Ui {class MainWindow;}
class MainWindow : public QMainWindow{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void set_terrain(Terrain);
private:
    Ui::MainWindow *ui;
    std::unique_ptr<Map_editor> mapeditor;
private slots:
    void save();
    void load();
    void newmap();
    void backward();
    void forward();
    void on_grass_clicked();
    void on_rock_clicked();
    void on_sand_clicked();
    void on_water_clicked();
protected:
    void keyPressEvent(QKeyEvent *event)override;
};
#endif // MAINWINDOW_H
