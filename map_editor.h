#ifndef MAP_EDITOR_H
#define MAP_EDITOR_H

#include <QWidget>

namespace Ui {
class Map_editor;
}

class Map_editor : public QWidget
{
    Q_OBJECT

public:
    explicit Map_editor(QWidget *parent = nullptr);
    ~Map_editor();

private:
    Ui::Map_editor *ui;
};

#endif // MAP_EDITOR_H
