#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QPixmap>
#include <QDebug>
#include <memory>
#include "mainpanel.h"
namespace Ui {
class MainWindow;
}
class Mainpanel;
enum class Terrain{
    grass,sand,rock,wather,tree
};
class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void set_terrain(Terrain);
private:
    Ui::MainWindow *ui;
    std::unique_ptr<Mainpanel> mainpanel;
    QVector<QPixmap*> map;
    QVector<QVector<bool>> access_map;
    Terrain actual_terrain;
private slots:
    void save();
    void load();
    void newmap();
    void backward();
    void forward();
};
#endif // MAINWINDOW_H
