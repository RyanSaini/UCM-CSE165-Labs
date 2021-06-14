/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *startGame;
    QGraphicsView *graphicsView;
    QPushButton *startGame_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1920, 1079);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        startGame = new QPushButton(centralwidget);
        startGame->setObjectName(QString::fromUtf8("startGame"));
        startGame->setGeometry(QRect(220, 610, 381, 261));
        QFont font;
        font.setFamily(QString::fromUtf8("Bebas Neue"));
        font.setPointSize(40);
        font.setBold(true);
        font.setWeight(75);
        startGame->setFont(font);
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 1921, 1041));
        startGame_2 = new QPushButton(centralwidget);
        startGame_2->setObjectName(QString::fromUtf8("startGame_2"));
        startGame_2->setGeometry(QRect(1320, 610, 381, 261));
        startGame_2->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        graphicsView->raise();
        startGame->raise();
        startGame_2->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        startGame->setText(QCoreApplication::translate("MainWindow", "Level 1!", nullptr));
        startGame_2->setText(QCoreApplication::translate("MainWindow", "Level 2!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
