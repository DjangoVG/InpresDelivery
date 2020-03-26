#include "MainsuiviCommande.h"
#include <QApplication>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <sys/shm.h>
#include <signal.h>


//#include "Ecran.h"
#include "Commun.ini"
char				Nom[12];
char				Ville[12];
MESSAGE			Message;

MainsuiviCommande *w;
int				idQ;

int main(int argc, char *argv[])
{

// Recuperation des ressources
if ((idQ = msgget(CLE,0)) == -1)
   { perror("Err de msgget()");
     exit(1);
   }
// idenfification
Message.lType = 1L;
Message.idProcess = getpid();
Message.Requete = IDENTIFICATIONSUIVI;
strcpy(Message.Data,argv[1]);
if (msgsnd(idQ,&Message,TAILLEBASE,0) == -1)
   { perror("Err de msgsnd()");
     exit(1);
   }

if (msgrcv(idQ,&Message,TAILLEMESSAGE,getpid(),0) == -1)
        { perror("Err. de msgrcv()");
          exit(1);
        }
strcpy(Nom,argv[1]);
strcpy(Ville,&Message.Data[12]);

QApplication a(argc, argv);
w = new MainsuiviCommande();
w->show();

return a.exec();
}
