/********************************************************************************
** Form generated from reading UI file 'map_editor.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAP_EDITOR_H
#define UI_MAP_EDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Map_editor
{
public:
    QLabel *label;

    void setupUi(QWidget *Map_editor)
    {
        if (Map_editor->objectName().isEmpty())
            Map_editor->setObjectName(QString::fromUtf8("Map_editor"));
        Map_editor->resize(730, 600);
        label = new QLabel(Map_editor);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 730, 600));

        retranslateUi(Map_editor);

        QMetaObject::connectSlotsByName(Map_editor);
    } // setupUi

    void retranslateUi(QWidget *Map_editor)
    {
        Map_editor->setWindowTitle(QApplication::translate("Map_editor", "Form", nullptr));
        label->setText(QApplication::translate("Map_editor", "XDDDDDDDDDD", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Map_editor: public Ui_Map_editor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAP_EDITOR_H
