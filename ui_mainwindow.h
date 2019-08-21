/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionLoad;
    QAction *actionSave;
    QAction *actionNew_map;
    QAction *actionBack;
    QAction *actionForward;
    QAction *New_map;
    QAction *Save;
    QAction *Load;
    QAction *Forward;
    QAction *Backward;
    QWidget *centralWidget;
    QLabel *label;
    QMenuBar *menuBar;
    QMenu *menuOptions;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(820, 625);
        actionLoad = new QAction(MainWindow);
        actionLoad->setObjectName(QString::fromUtf8("actionLoad"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionNew_map = new QAction(MainWindow);
        actionNew_map->setObjectName(QString::fromUtf8("actionNew_map"));
        actionBack = new QAction(MainWindow);
        actionBack->setObjectName(QString::fromUtf8("actionBack"));
        actionForward = new QAction(MainWindow);
        actionForward->setObjectName(QString::fromUtf8("actionForward"));
        New_map = new QAction(MainWindow);
        New_map->setObjectName(QString::fromUtf8("New_map"));
        Save = new QAction(MainWindow);
        Save->setObjectName(QString::fromUtf8("Save"));
        Load = new QAction(MainWindow);
        Load->setObjectName(QString::fromUtf8("Load"));
        Forward = new QAction(MainWindow);
        Forward->setObjectName(QString::fromUtf8("Forward"));
        Backward = new QAction(MainWindow);
        Backward->setObjectName(QString::fromUtf8("Backward"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 730, 600));
        label->setStyleSheet(QString::fromUtf8("border-style:solid;\n"
"border-color:black;\n"
"border-width:2px;"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 820, 20));
        menuOptions = new QMenu(menuBar);
        menuOptions->setObjectName(QString::fromUtf8("menuOptions"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuOptions->menuAction());
        menuOptions->addAction(New_map);
        menuOptions->addAction(Save);
        menuOptions->addAction(Load);
        menuOptions->addAction(Forward);
        menuOptions->addAction(Backward);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionLoad->setText(QApplication::translate("MainWindow", "Load", nullptr));
        actionSave->setText(QApplication::translate("MainWindow", "Save", nullptr));
        actionNew_map->setText(QApplication::translate("MainWindow", "New map", nullptr));
        actionBack->setText(QApplication::translate("MainWindow", "Backwards", nullptr));
        actionForward->setText(QApplication::translate("MainWindow", "Forward", nullptr));
        New_map->setText(QApplication::translate("MainWindow", "New map", nullptr));
        Save->setText(QApplication::translate("MainWindow", "Save", nullptr));
        Load->setText(QApplication::translate("MainWindow", "Load", nullptr));
        Forward->setText(QApplication::translate("MainWindow", "Forward", nullptr));
        Backward->setText(QApplication::translate("MainWindow", "Backward", nullptr));
        label->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        menuOptions->setTitle(QApplication::translate("MainWindow", "Options", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
