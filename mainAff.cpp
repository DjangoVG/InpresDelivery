#include "MainAffichage.h"
#include <QApplication>

#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/sem.h>
#include "Ecran.h"

int		idM,idS;
int* 	pShm;
MainAffichage* w;
 
int main(int argc, char *argv[])
{
Trace("Dans Affichage");
idM = atoi(argv[1]);
//idS = atoi(argv[2]);

pShm = (int*)shmat(idM,NULL,0);
*pShm = 240;
*(pShm + 1) = 140;
QApplication a(argc, argv);
w = new MainAffichage;   
w->show();

    return a.exec();
}
