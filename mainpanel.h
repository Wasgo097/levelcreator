#ifndef MAINPANEL_H
#define MAINPANEL_H
#include <QWidget>
namespace Ui {
class Mainpanel;
}
class MainWindow;
class Mainpanel : public QWidget
{
    Q_OBJECT
public:
    explicit Mainpanel(MainWindow *parent = nullptr);
    ~Mainpanel();
private slots:
    void on_grass_clicked();

    void on_wather_clicked();

    void on_rock_clicked();

    void on_sand_clicked();

    void on_tree_clicked();

private:
    Ui::Mainpanel *ui;
    MainWindow * window;
};
#endif // MAINPANEL_H
