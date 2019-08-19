#ifndef NEWMAP_H
#define NEWMAP_H
#include <QWidget>
namespace Ui{class Newmap;}
class MainWindow;
class Newmap : public QWidget{
    Q_OBJECT
public:
    explicit Newmap(MainWindow *parent = nullptr);
    ~Newmap();
private:
    Ui::Newmap *ui;
};
#endif // NEWMAP_H
