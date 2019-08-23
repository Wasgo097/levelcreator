/********************************************************************************
** Form generated from reading UI file 'new_map.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEW_MAP_H
#define UI_NEW_MAP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_New_map
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLineEdit *width;
    QLabel *label;
    QLineEdit *height;
    QLabel *label_3;
    QComboBox *terrain;
    QPushButton *Set;

    void setupUi(QDialog *New_map)
    {
        if (New_map->objectName().isEmpty())
            New_map->setObjectName(QString::fromUtf8("New_map"));
        New_map->resize(154, 263);
        horizontalLayoutWidget = new QWidget(New_map);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 0, 151, 261));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        width = new QLineEdit(horizontalLayoutWidget);
        width->setObjectName(QString::fromUtf8("width"));

        verticalLayout->addWidget(width);

        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        height = new QLineEdit(horizontalLayoutWidget);
        height->setObjectName(QString::fromUtf8("height"));

        verticalLayout->addWidget(height);

        label_3 = new QLabel(horizontalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        terrain = new QComboBox(horizontalLayoutWidget);
        terrain->setObjectName(QString::fromUtf8("terrain"));

        verticalLayout->addWidget(terrain);

        Set = new QPushButton(horizontalLayoutWidget);
        Set->setObjectName(QString::fromUtf8("Set"));

        verticalLayout->addWidget(Set);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(New_map);

        QMetaObject::connectSlotsByName(New_map);
    } // setupUi

    void retranslateUi(QDialog *New_map)
    {
        New_map->setWindowTitle(QApplication::translate("New_map", "Dialog", nullptr));
        label_2->setText(QApplication::translate("New_map", "Width area", nullptr));
        label->setText(QApplication::translate("New_map", "Height area", nullptr));
        label_3->setText(QApplication::translate("New_map", "Base biom", nullptr));
        Set->setText(QApplication::translate("New_map", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class New_map: public Ui_New_map {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEW_MAP_H
