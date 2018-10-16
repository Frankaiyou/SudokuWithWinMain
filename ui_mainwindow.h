/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Tue Oct 16 21:21:14 2018
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew_Game;
    QAction *actionHint_one;
    QAction *actionHint_All;
    QAction *actionRestart_Game;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *level_menu;
    QMenu *menuGam;
    QMenu *grid_size_menu;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(400, 300);
        MainWindow->setAutoFillBackground(false);
        actionNew_Game = new QAction(MainWindow);
        actionNew_Game->setObjectName(QString::fromUtf8("actionNew_Game"));
        actionHint_one = new QAction(MainWindow);
        actionHint_one->setObjectName(QString::fromUtf8("actionHint_one"));
        actionHint_All = new QAction(MainWindow);
        actionHint_All->setObjectName(QString::fromUtf8("actionHint_All"));
        actionRestart_Game = new QAction(MainWindow);
        actionRestart_Game->setObjectName(QString::fromUtf8("actionRestart_Game"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 20));
        level_menu = new QMenu(menuBar);
        level_menu->setObjectName(QString::fromUtf8("level_menu"));
        menuGam = new QMenu(menuBar);
        menuGam->setObjectName(QString::fromUtf8("menuGam"));
        grid_size_menu = new QMenu(menuGam);
        grid_size_menu->setObjectName(QString::fromUtf8("grid_size_menu"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuGam->menuAction());
        menuBar->addAction(level_menu->menuAction());
        menuGam->addAction(actionNew_Game);
        menuGam->addAction(actionRestart_Game);
        menuGam->addAction(actionHint_one);
        menuGam->addAction(actionHint_All);
        menuGam->addAction(grid_size_menu->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Sudoku Game", 0, QApplication::UnicodeUTF8));
        actionNew_Game->setText(QApplication::translate("MainWindow", "New Game", 0, QApplication::UnicodeUTF8));
        actionHint_one->setText(QApplication::translate("MainWindow", "Hint One", 0, QApplication::UnicodeUTF8));
        actionHint_All->setText(QApplication::translate("MainWindow", "Solve", 0, QApplication::UnicodeUTF8));
        actionRestart_Game->setText(QApplication::translate("MainWindow", "Restart Game", 0, QApplication::UnicodeUTF8));
        level_menu->setTitle(QApplication::translate("MainWindow", "Level", 0, QApplication::UnicodeUTF8));
        menuGam->setTitle(QApplication::translate("MainWindow", "Game", 0, QApplication::UnicodeUTF8));
        grid_size_menu->setTitle(QApplication::translate("MainWindow", "Grid Size", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
