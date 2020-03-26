#include "MainAffClient.h"
#include "ui_MainAffClient.h"
#include "Ecran.h"
#include "Commun.ini"

#include <unistd.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <signal.h>

extern char					Nom[12];
extern char					Lieu[12];
extern int 					idQ;
extern MainAffClient 	*w;
int							Commande[10];
int							Pannier;

ELEMENT						Elm[5];

MESSAGE						Message;

void HandlerReceptionMessage(int);

MainAffClient::MainAffClient(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainAffClient)
{
ui->setupUi(this);
char	Buff[40];
sprintf(Buff,"Nom : %s (ville : %s)",Nom,Lieu);

setWindowTitle(Buff);
setPannier(0);
 
// Armement des signaux  

}

MainAffClient::~MainAffClient()
{
    delete ui;
}

void MainAffClient::on_ButtonMateriel_clicked()
{
Trace("Dans on_ButtonMateriel_clicked");
setInfo("");

}

void MainAffClient::on_ButtonBrassage_clicked()
{
Trace("Dans on_ButtonBrassage_clicked");
setInfo("");

}

void MainAffClient::on_ButtonCommander_clicked()
{
Trace("Dans ButtonCommander");

}

void MainAffClient::on_ButtonAnnuler_clicked()
{
Trace("Dans ButtonAnnuler");

}

void MainAffClient::on_ButtonInformation_clicked()
{
Trace("Dans ButtonInformation");

}

void MainAffClient::on_ButtonTerminer_clicked()
{
if (Pannier)
	{
	setInfo("Confirmer ou annuler votre commande S.V.P.");
	return;
	}
exit(0);
}

void MainAffClient::on_radioButton0_clicked()
{
setImage(Elm[0].Image);
}

void MainAffClient::on_radioButton1_clicked()
{
setImage(Elm[1].Image);
}

void MainAffClient::on_radioButton2_clicked()
{
setImage(Elm[2].Image);
}

void MainAffClient::on_radioButton3_clicked()
{
setImage(Elm[3].Image);
}

void MainAffClient::on_radioButton4_clicked()
{
setImage(Elm[4].Image);
}

void MainAffClient::on_checkBox0_clicked()
{
Trace("Dans checkBox0");

return;
}

void MainAffClient::on_checkBox1_clicked()
{
Trace("Dans checkBox1");

return;
}

void MainAffClient::on_checkBox2_clicked()
{
Trace("Dans checkBox2");

return;
}

void MainAffClient::on_checkBox3_clicked()
{
Trace("Dans checkBox3");

return;
}

void MainAffClient::on_checkBox4_clicked()
{
Trace("Dans checkBox4");

return;
}


#include "fctUtilesClient.cpp"

void HandlerReceptionMessage(int Sig)
{


Trace("Reception d un signal %d",Sig);
// lire le message 

        
switch (Message.Requete)
	{
	case MATERIEL:
	case BRASSAGE:
		
		break;
	case ARTICLEINDISPONIBLE:
		
		break;
	}

return;
}

void MainAffClient::setArticle(int Nb)
{
Trace("setArticle %d",Nb);
memcpy(Elm,(ELEMENT*)Message.Data,Nb * sizeof(ELEMENT));
// a completer

setArticle0(Elm[0].Produit);
setQuantite0(Elm[0].Stock);
setImage(Elm[0].Image);
setRadioBoutton0(true);
if (Nb == 1) return;
// ...
setArticle1(Elm[1].Produit);
setQuantite1(Elm[1].Stock);

if (Nb == 2) return;
//...
setArticle2(Elm[2].Produit);
setQuantite2(Elm[2].Stock);

if (Nb == 3) return;
// ...
setArticle3(Elm[3].Produit);
setQuantite3(Elm[3].Stock);

if (Nb == 4) return;
// ...
setArticle4(Elm[4].Produit);
setQuantite4(Elm[4].Stock);
}


void MainAffClient::clearArticle()
{
Trace("clearArticle");
setBox0(false);
setBox1(false);
setBox2(false);
setBox3(false);
setBox4(false);

setArticle0("");
setQuantite0(-1);
setImage("");
setArticle1("");
setQuantite1(-1);
setArticle2("");
setQuantite2(-1);
setArticle3("");
setQuantite3(-1);
setArticle4("");
setQuantite4(-1);
}
