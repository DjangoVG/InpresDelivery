#include "MainAffichage.h"
#include "ui_MainAffichage.h"
#include <signal.h>
#include <unistd.h>

#include "Donnee.dat"

extern int		idM,idS;
extern 	int* 	pShm;
extern MainAffichage* w;

void HandlerAlarm(int);

MainAffichage::MainAffichage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainAffichage)
{
    ui->setupUi(this);
    
    
    struct sigaction	Act;
    Act.sa_handler = HandlerAlarm;
    sigemptyset(&Act.sa_mask);
    Act.sa_flags = 0;
    sigaction(SIGALRM,&Act,NULL);
    alarm(1);
}

MainAffichage::~MainAffichage()
{
    delete ui;
}

void MainAffichage::TraceTroncon(QPainter* F,int D,int A)
{
        F->setPen(Qt::black);
        F->drawLine(Donnee[D].PosReel.L, Donnee[D].PosReel.C, Donnee[A].PosReel.L, Donnee[A].PosReel.C);
        F->setPen(Qt::red);
        F->drawText(Donnee[D].PosStation.L,Donnee[D].PosStation.C,Donnee[D].Station);
        F->drawText(Donnee[A].PosStation.L,Donnee[A].PosStation.C,Donnee[A].Station);
}

void MainAffichage::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.setPen(Qt::red);
    painter.setBrush(Qt::red);
    painter.drawRect(*pShm -4 ,*(pShm + 1) - 2,7,7);          // positionnement de V1 en A4
//    painter.setPen(Qt::blue);
//    painter.setBrush(Qt::blue);
//    painter.drawRect(*pShm -4 ,*(pShm + 1) - 2,7,7);         // positionnement de V2 en A4

 int i = 0,j;
while (i<=6)
	{
	j = 0;
	while (Troncon[i].S1[j+1])
		{
		TraceTroncon(&painter,Troncon[i].S1[j],Troncon[i].S1[j+1]);
		j++;
		}
	i++;
	}

}

void MainAffichage::Rafraichir()
{
    this->update();
}

void HandlerAlarm(int Sig)
{
//Trace("%d recu",Sig);
w->Rafraichir();
alarm(1);
}
