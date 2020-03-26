/********************************************************************************
** Form generated from reading UI file 'MainsuiviCommande.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINSUIVICOMMANDE_H
#define UI_MAINSUIVICOMMANDE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainsuiviCommande
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *labelVille;
    QLineEdit *lineEdit;
    QPushButton *ButtonSuivi;
    QPushButton *ButtonTerminer;
    QPushButton *ButtonRetrait;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainsuiviCommande)
    {
        if (MainsuiviCommande->objectName().isEmpty())
            MainsuiviCommande->setObjectName(QString::fromUtf8("MainsuiviCommande"));
        MainsuiviCommande->resize(360, 115);
        centralWidget = new QWidget(MainsuiviCommande);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 100, 20));
        labelVille = new QLabel(centralWidget);
        labelVille->setObjectName(QString::fromUtf8("labelVille"));
        labelVille->setGeometry(QRect(140, 10, 180, 16));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        labelVille->setFont(font);
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 40, 340, 20));
        ButtonSuivi = new QPushButton(centralWidget);
        ButtonSuivi->setObjectName(QString::fromUtf8("ButtonSuivi"));
        ButtonSuivi->setGeometry(QRect(10, 70, 80, 25));
        ButtonTerminer = new QPushButton(centralWidget);
        ButtonTerminer->setObjectName(QString::fromUtf8("ButtonTerminer"));
        ButtonTerminer->setGeometry(QRect(270, 70, 80, 25));
        ButtonRetrait = new QPushButton(centralWidget);
        ButtonRetrait->setObjectName(QString::fromUtf8("ButtonRetrait"));
        ButtonRetrait->setGeometry(QRect(100, 70, 80, 25));
        MainsuiviCommande->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainsuiviCommande);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainsuiviCommande->setStatusBar(statusBar);

        retranslateUi(MainsuiviCommande);

        QMetaObject::connectSlotsByName(MainsuiviCommande);
    } // setupUi

    void retranslateUi(QMainWindow *MainsuiviCommande)
    {
        MainsuiviCommande->setWindowTitle(QApplication::translate("MainsuiviCommande", "MainsuiviCommande", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainsuiviCommande", "lieu de livraison :", 0, QApplication::UnicodeUTF8));
        labelVille->setText(QApplication::translate("MainsuiviCommande", "TextLabel", 0, QApplication::UnicodeUTF8));
        ButtonSuivi->setText(QApplication::translate("MainsuiviCommande", "Suivi", 0, QApplication::UnicodeUTF8));
        ButtonTerminer->setText(QApplication::translate("MainsuiviCommande", "Terminer", 0, QApplication::UnicodeUTF8));
        ButtonRetrait->setText(QApplication::translate("MainsuiviCommande", "Retrait", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainsuiviCommande: public Ui_MainsuiviCommande {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINSUIVICOMMANDE_H
