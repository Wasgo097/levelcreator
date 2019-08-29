#ifndef NEW_MAP_H
#define NEW_MAP_H
#include <QDialog>
#include "global_class.h"
namespace Ui {class New_map;}
class MainWindow;
class New_map : public QDialog{
    Q_OBJECT
public:
    static Map_option get_map(MainWindow * parent);
private slots:
    void on_Set_clicked();
private:
    explicit New_map(MainWindow *parent = nullptr);
    ~New_map();
private:
    Ui::New_map *ui;
};
#endif // NEW_MAP_H
