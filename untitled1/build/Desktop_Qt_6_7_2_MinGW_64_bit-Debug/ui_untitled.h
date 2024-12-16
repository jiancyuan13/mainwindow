/********************************************************************************
** Form generated from reading UI file 'untitled.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UNTITLED_H
#define UI_UNTITLED_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionnew;
    QAction *actionopen;
    QAction *actionclose;
    QAction *actionsave;
    QAction *actionsave_as;
    QAction *actionedit;
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menudouble_clicking;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        actionnew = new QAction(MainWindow);
        actionnew->setObjectName("actionnew");
        actionopen = new QAction(MainWindow);
        actionopen->setObjectName("actionopen");
        actionclose = new QAction(MainWindow);
        actionclose->setObjectName("actionclose");
        actionsave = new QAction(MainWindow);
        actionsave->setObjectName("actionsave");
        actionsave_as = new QAction(MainWindow);
        actionsave_as->setObjectName("actionsave_as");
        actionedit = new QAction(MainWindow);
        actionedit->setObjectName("actionedit");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(30, 50, 711, 471));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        menudouble_clicking = new QMenu(menubar);
        menudouble_clicking->setObjectName("menudouble_clicking");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menudouble_clicking->menuAction());
        menudouble_clicking->addAction(actionnew);
        menudouble_clicking->addAction(actionopen);
        menudouble_clicking->addAction(actionclose);
        menudouble_clicking->addAction(actionsave);
        menudouble_clicking->addAction(actionsave_as);
        menudouble_clicking->addAction(actionedit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionnew->setText(QCoreApplication::translate("MainWindow", "new", nullptr));
        actionopen->setText(QCoreApplication::translate("MainWindow", "open", nullptr));
        actionclose->setText(QCoreApplication::translate("MainWindow", "close", nullptr));
        actionsave->setText(QCoreApplication::translate("MainWindow", "save", nullptr));
        actionsave_as->setText(QCoreApplication::translate("MainWindow", "save as", nullptr));
        actionedit->setText(QCoreApplication::translate("MainWindow", "edit", nullptr));
        menudouble_clicking->setTitle(QCoreApplication::translate("MainWindow", "file", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UNTITLED_H
