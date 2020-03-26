/********************************************************************************
** Form generated from reading UI file 'MainAffClient.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINAFFCLIENT_H
#define UI_MAINAFFCLIENT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainAffClient
{
public:
    QWidget *centralWidget;
    QCheckBox *checkBox2;
    QRadioButton *radioButton3;
    QRadioButton *radioButton4;
    QLineEdit *lineQuantite4;
    QLineEdit *lineQuantite1;
    QPushButton *ButtonAnnuler;
    QPushButton *ButtonCommander;
    QLabel *label;
    QRadioButton *radioButton0;
    QLineEdit *lineCommande;
    QLineEdit *lineArticle3;
    QLineEdit *lineQuantite0;
    QCheckBox *checkBox1;
    QLineEdit *lineArticle4;
    QLabel *labelImage;
    QLineEdit *lineQuantite2;
    QLineEdit *lineQuantite3;
    QRadioButton *radioButton2;
    QRadioButton *radioButton1;
    QLineEdit *lineInfo;
    QCheckBox *checkBox3;
    QLineEdit *lineArticle2;
    QPushButton *ButtonInformation;
    QPushButton *ButtonMateriel;
    QPushButton *ButtonTerminer;
    QCheckBox *checkBox0;
    QLineEdit *lineArticle1;
    QLineEdit *lineArticle0;
    QCheckBox *checkBox4;
    QPushButton *ButtonBrassage;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainAffClient)
    {
        if (MainAffClient->objectName().isEmpty())
            MainAffClient->setObjectName(QString::fromUtf8("MainAffClient"));
        MainAffClient->resize(410, 290);
        centralWidget = new QWidget(MainAffClient);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        checkBox2 = new QCheckBox(centralWidget);
        checkBox2->setObjectName(QString::fromUtf8("checkBox2"));
        checkBox2->setGeometry(QRect(200, 90, 21, 17));
        radioButton3 = new QRadioButton(centralWidget);
        radioButton3->setObjectName(QString::fromUtf8("radioButton3"));
        radioButton3->setGeometry(QRect(10, 110, 20, 17));
        radioButton3->setChecked(false);
        radioButton4 = new QRadioButton(centralWidget);
        radioButton4->setObjectName(QString::fromUtf8("radioButton4"));
        radioButton4->setGeometry(QRect(10, 130, 20, 17));
        radioButton4->setChecked(false);
        lineQuantite4 = new QLineEdit(centralWidget);
        lineQuantite4->setObjectName(QString::fromUtf8("lineQuantite4"));
        lineQuantite4->setGeometry(QRect(160, 130, 30, 20));
        lineQuantite4->setReadOnly(true);
        lineQuantite1 = new QLineEdit(centralWidget);
        lineQuantite1->setObjectName(QString::fromUtf8("lineQuantite1"));
        lineQuantite1->setGeometry(QRect(160, 70, 30, 20));
        lineQuantite1->setReadOnly(true);
        ButtonAnnuler = new QPushButton(centralWidget);
        ButtonAnnuler->setObjectName(QString::fromUtf8("ButtonAnnuler"));
        ButtonAnnuler->setGeometry(QRect(310, 180, 90, 25));
        ButtonCommander = new QPushButton(centralWidget);
        ButtonCommander->setObjectName(QString::fromUtf8("ButtonCommander"));
        ButtonCommander->setGeometry(QRect(210, 180, 90, 25));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 180, 47, 20));
        radioButton0 = new QRadioButton(centralWidget);
        radioButton0->setObjectName(QString::fromUtf8("radioButton0"));
        radioButton0->setGeometry(QRect(10, 50, 20, 17));
        radioButton0->setChecked(false);
        lineCommande = new QLineEdit(centralWidget);
        lineCommande->setObjectName(QString::fromUtf8("lineCommande"));
        lineCommande->setGeometry(QRect(60, 180, 31, 20));
        lineCommande->setReadOnly(true);
        lineArticle3 = new QLineEdit(centralWidget);
        lineArticle3->setObjectName(QString::fromUtf8("lineArticle3"));
        lineArticle3->setGeometry(QRect(30, 110, 120, 20));
        lineArticle3->setReadOnly(true);
        lineQuantite0 = new QLineEdit(centralWidget);
        lineQuantite0->setObjectName(QString::fromUtf8("lineQuantite0"));
        lineQuantite0->setGeometry(QRect(160, 50, 30, 20));
        lineQuantite0->setReadOnly(true);
        checkBox1 = new QCheckBox(centralWidget);
        checkBox1->setObjectName(QString::fromUtf8("checkBox1"));
        checkBox1->setGeometry(QRect(200, 70, 21, 17));
        lineArticle4 = new QLineEdit(centralWidget);
        lineArticle4->setObjectName(QString::fromUtf8("lineArticle4"));
        lineArticle4->setGeometry(QRect(30, 130, 120, 20));
        lineArticle4->setReadOnly(true);
        labelImage = new QLabel(centralWidget);
        labelImage->setObjectName(QString::fromUtf8("labelImage"));
        labelImage->setGeometry(QRect(240, 10, 160, 150));
        lineQuantite2 = new QLineEdit(centralWidget);
        lineQuantite2->setObjectName(QString::fromUtf8("lineQuantite2"));
        lineQuantite2->setGeometry(QRect(160, 90, 30, 20));
        lineQuantite2->setReadOnly(true);
        lineQuantite3 = new QLineEdit(centralWidget);
        lineQuantite3->setObjectName(QString::fromUtf8("lineQuantite3"));
        lineQuantite3->setGeometry(QRect(160, 110, 30, 20));
        lineQuantite3->setReadOnly(true);
        radioButton2 = new QRadioButton(centralWidget);
        radioButton2->setObjectName(QString::fromUtf8("radioButton2"));
        radioButton2->setGeometry(QRect(10, 90, 20, 17));
        radioButton2->setChecked(false);
        radioButton1 = new QRadioButton(centralWidget);
        radioButton1->setObjectName(QString::fromUtf8("radioButton1"));
        radioButton1->setGeometry(QRect(10, 70, 20, 17));
        radioButton1->setChecked(false);
        lineInfo = new QLineEdit(centralWidget);
        lineInfo->setObjectName(QString::fromUtf8("lineInfo"));
        lineInfo->setGeometry(QRect(10, 240, 291, 25));
        lineInfo->setReadOnly(true);
        checkBox3 = new QCheckBox(centralWidget);
        checkBox3->setObjectName(QString::fromUtf8("checkBox3"));
        checkBox3->setGeometry(QRect(200, 110, 21, 17));
        lineArticle2 = new QLineEdit(centralWidget);
        lineArticle2->setObjectName(QString::fromUtf8("lineArticle2"));
        lineArticle2->setGeometry(QRect(30, 90, 120, 20));
        lineArticle2->setReadOnly(true);
        ButtonInformation = new QPushButton(centralWidget);
        ButtonInformation->setObjectName(QString::fromUtf8("ButtonInformation"));
        ButtonInformation->setGeometry(QRect(10, 210, 291, 25));
        ButtonMateriel = new QPushButton(centralWidget);
        ButtonMateriel->setObjectName(QString::fromUtf8("ButtonMateriel"));
        ButtonMateriel->setGeometry(QRect(10, 10, 90, 25));
        ButtonTerminer = new QPushButton(centralWidget);
        ButtonTerminer->setObjectName(QString::fromUtf8("ButtonTerminer"));
        ButtonTerminer->setGeometry(QRect(310, 240, 90, 25));
        checkBox0 = new QCheckBox(centralWidget);
        checkBox0->setObjectName(QString::fromUtf8("checkBox0"));
        checkBox0->setGeometry(QRect(200, 50, 21, 17));
        lineArticle1 = new QLineEdit(centralWidget);
        lineArticle1->setObjectName(QString::fromUtf8("lineArticle1"));
        lineArticle1->setGeometry(QRect(30, 70, 120, 20));
        lineArticle1->setReadOnly(true);
        lineArticle0 = new QLineEdit(centralWidget);
        lineArticle0->setObjectName(QString::fromUtf8("lineArticle0"));
        lineArticle0->setGeometry(QRect(30, 50, 120, 20));
        lineArticle0->setReadOnly(true);
        checkBox4 = new QCheckBox(centralWidget);
        checkBox4->setObjectName(QString::fromUtf8("checkBox4"));
        checkBox4->setGeometry(QRect(200, 130, 21, 17));
        ButtonBrassage = new QPushButton(centralWidget);
        ButtonBrassage->setObjectName(QString::fromUtf8("ButtonBrassage"));
        ButtonBrassage->setGeometry(QRect(120, 10, 90, 25));
        MainAffClient->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainAffClient);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainAffClient->setStatusBar(statusBar);

        retranslateUi(MainAffClient);

        QMetaObject::connectSlotsByName(MainAffClient);
    } // setupUi

    void retranslateUi(QMainWindow *MainAffClient)
    {
        MainAffClient->setWindowTitle(QApplication::translate("MainAffClient", "MainAffClient", 0, QApplication::UnicodeUTF8));
        checkBox2->setText(QString());
        radioButton3->setText(QString());
        radioButton4->setText(QString());
        ButtonAnnuler->setText(QApplication::translate("MainAffClient", "Annuler", 0, QApplication::UnicodeUTF8));
        ButtonCommander->setText(QApplication::translate("MainAffClient", "Commander", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainAffClient", "Panier : ", 0, QApplication::UnicodeUTF8));
        radioButton0->setText(QString());
        checkBox1->setText(QString());
        labelImage->setText(QString());
        radioButton2->setText(QString());
        radioButton1->setText(QString());
        checkBox3->setText(QString());
        ButtonInformation->setText(QApplication::translate("MainAffClient", "Information :", 0, QApplication::UnicodeUTF8));
        ButtonMateriel->setText(QApplication::translate("MainAffClient", "Materiel", 0, QApplication::UnicodeUTF8));
        ButtonTerminer->setText(QApplication::translate("MainAffClient", "Terminer", 0, QApplication::UnicodeUTF8));
        checkBox0->setText(QString());
        checkBox4->setText(QString());
        ButtonBrassage->setText(QApplication::translate("MainAffClient", "Brassage", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainAffClient: public Ui_MainAffClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINAFFCLIENT_H
