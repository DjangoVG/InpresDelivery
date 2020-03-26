/********************************************************************************
** Form generated from reading UI file 'MainAffichage.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINAFFICHAGE_H
#define UI_MAINAFFICHAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainAffichage
{
public:
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainAffichage)
    {
        if (MainAffichage->objectName().isEmpty())
            MainAffichage->setObjectName(QString::fromUtf8("MainAffichage"));
        MainAffichage->resize(520, 310);
        centralWidget = new QWidget(MainAffichage);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        MainAffichage->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainAffichage);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainAffichage->setStatusBar(statusBar);

        retranslateUi(MainAffichage);

        QMetaObject::connectSlotsByName(MainAffichage);
    } // setupUi

    void retranslateUi(QMainWindow *MainAffichage)
    {
        MainAffichage->setWindowTitle(QApplication::translate("MainAffichage", "Affichage", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainAffichage: public Ui_MainAffichage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINAFFICHAGE_H
