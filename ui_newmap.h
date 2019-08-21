/********************************************************************************
** Form generated from reading UI file 'newmap.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWMAP_H
#define UI_NEWMAP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Newmap
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLineEdit *width;
    QLabel *label;
    QLineEdit *heigjt;
    QLabel *label_3;
    QComboBox *comboBox;
    QPushButton *Set;

    void setupUi(QWidget *Newmap)
    {
        if (Newmap->objectName().isEmpty())
            Newmap->setObjectName(QString::fromUtf8("Newmap"));
        Newmap->resize(153, 264);
        horizontalLayoutWidget = new QWidget(Newmap);
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

        heigjt = new QLineEdit(horizontalLayoutWidget);
        heigjt->setObjectName(QString::fromUtf8("heigjt"));

        verticalLayout->addWidget(heigjt);

        label_3 = new QLabel(horizontalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        comboBox = new QComboBox(horizontalLayoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        verticalLayout->addWidget(comboBox);

        Set = new QPushButton(horizontalLayoutWidget);
        Set->setObjectName(QString::fromUtf8("Set"));

        verticalLayout->addWidget(Set);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(Newmap);

        QMetaObject::connectSlotsByName(Newmap);
    } // setupUi

    void retranslateUi(QWidget *Newmap)
    {
        Newmap->setWindowTitle(QApplication::translate("Newmap", "Form", nullptr));
        label_2->setText(QApplication::translate("Newmap", "Width", nullptr));
        label->setText(QApplication::translate("Newmap", "Height", nullptr));
        label_3->setText(QApplication::translate("Newmap", "Base biom", nullptr));
        comboBox->setItemText(0, QApplication::translate("Newmap", "Grass", nullptr));
        comboBox->setItemText(1, QApplication::translate("Newmap", "Rock", nullptr));
        comboBox->setItemText(2, QApplication::translate("Newmap", "Sand", nullptr));
        comboBox->setItemText(3, QApplication::translate("Newmap", "Wather", nullptr));

        Set->setText(QApplication::translate("Newmap", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Newmap: public Ui_Newmap {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWMAP_H
