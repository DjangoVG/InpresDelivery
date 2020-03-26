#include "MainAffClient.h"
#include <QApplication>

#include <unistd.h>
#include <sys/ipc.h>
#include <sys/msg.h>

#include "Commun.ini"
#include "Ecran.h"

char		Nom[12];
char		Lieu[12];
int 		idQ;



MainAffClient *w;

int main(int argc, char *argv[])
{
MESSAGE 	Message;
if (argc != 3)
	{
	printf("Trop ou trop peu d argument\n");
	exit(1);
	}

Trace("Debut");
strcpy(Nom,argv[1]);
strcpy(Lieu,argv[2]);

// Recuperation des ressources
if ((idQ = msgget(CLE,0)) == -1)
   { perror("Err de msgget()");
     exit(1);
   }
// Identification

QApplication a(argc, argv);
w = new MainAffClient();
w->show();

return a.exec();
}
