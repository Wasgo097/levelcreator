/********************************************************************************
** Form generated from reading UI file 'mainpanel.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINPANEL_H
#define UI_MAINPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Mainpanel
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *grass;
    QPushButton *wather;
    QPushButton *rock;
    QPushButton *sand;
    QPushButton *tree;

    void setupUi(QWidget *Mainpanel)
    {
        if (Mainpanel->objectName().isEmpty())
            Mainpanel->setObjectName(QString::fromUtf8("Mainpanel"));
        Mainpanel->resize(85, 200);
        verticalLayoutWidget = new QWidget(Mainpanel);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 82, 211));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        grass = new QPushButton(verticalLayoutWidget);
        grass->setObjectName(QString::fromUtf8("grass"));

        verticalLayout->addWidget(grass);

        wather = new QPushButton(verticalLayoutWidget);
        wather->setObjectName(QString::fromUtf8("wather"));

        verticalLayout->addWidget(wather);

        rock = new QPushButton(verticalLayoutWidget);
        rock->setObjectName(QString::fromUtf8("rock"));

        verticalLayout->addWidget(rock);

        sand = new QPushButton(verticalLayoutWidget);
        sand->setObjectName(QString::fromUtf8("sand"));

        verticalLayout->addWidget(sand);

        tree = new QPushButton(verticalLayoutWidget);
        tree->setObjectName(QString::fromUtf8("tree"));

        verticalLayout->addWidget(tree);


        retranslateUi(Mainpanel);

        QMetaObject::connectSlotsByName(Mainpanel);
    } // setupUi

    void retranslateUi(QWidget *Mainpanel)
    {
        Mainpanel->setWindowTitle(QApplication::translate("Mainpanel", "Form", nullptr));
        grass->setText(QApplication::translate("Mainpanel", "Grass", nullptr));
        wather->setText(QApplication::translate("Mainpanel", "Wather", nullptr));
        rock->setText(QApplication::translate("Mainpanel", "Rock", nullptr));
        sand->setText(QApplication::translate("Mainpanel", "Sand", nullptr));
        tree->setText(QApplication::translate("Mainpanel", "Tree", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Mainpanel: public Ui_Mainpanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINPANEL_H
