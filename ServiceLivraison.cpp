#include <stdlib.h>
#include <unistd.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <signal.h>

#include "Commun.ini"
#include "Ecran.h"

MESSAGE	Message;
int			idQ,idM;
int			hdPR,hdPW;
int 		idFils;

int main(int argc,char* argv[])
{
idQ = atoi(argv[1]);
idM = atoi(argv[2]);
hdPR = atoi(argv[3]);
hdPW = atoi(argv[4]);

Trace("idQ : %d  idM : %d  idP = %d",idQ,idM,hdPR);
// Creation de VehiculeLivraison

while (1)
{
// Traitement de la commande
}
}
