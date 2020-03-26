#include "MainsuiviCommande.h"
#include "ui_MainsuiviCommande.h"

#include <unistd.h>
#include <sys/ipc.h>
#include <sys/msg.h>

#include "Commun.ini"
#include "Ecran.h"

extern int 		idQ;
extern MESSAGE			Message;
extern char				Nom[12];
extern char				Ville[12];

MainsuiviCommande::MainsuiviCommande(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainsuiviCommande)
{
       ui->setupUi(this);
    setWindowTitle(Nom);
    ui->labelVille->setText(Ville);
}

MainsuiviCommande::~MainsuiviCommande()
{
    delete ui;

}

void MainsuiviCommande::on_ButtonSuivi_clicked()
{
Trace("Dans on_ButtonSuivi_clicked");

}

void MainsuiviCommande::on_ButtonTerminer_clicked()
{
exit(0);
}

void MainsuiviCommande::on_ButtonRetrait_clicked()
{
Trace("Dans on_ButtonRetrait_clicked");
   
}


void MainsuiviCommande::setInfo(const char* Text)
{
if (strlen(Text) == 0 ) 
   { 
   ui->lineEdit->clear();
   return;
   }
ui->lineEdit->setText(Text);
return;
}
