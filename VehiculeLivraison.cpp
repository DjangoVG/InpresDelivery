#include <string.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <sys/shm.h>
#include <unistd.h>
#include <signal.h>
#include "Ecran.h"
#include "Commun.ini"
#include "Donnee.dat"

void Fct(int);
#define 			TEMPS		10


int	idQ,idS,idM;
typedef struct
{
	int		X;
	int 		Y;
} MEMOIRE;

MEMOIRE* 	Memoire;
MESSAGE		Message;
int i, Indice;
char Nom[12];
char Ville[12];
int main(int argc,char* argv[])
{
int		hdP;
idQ = atoi(argv[1]);
idM = atoi(argv[2]);
hdP = atoi(argv[3]);
// Armement de SIGUSR1 


while (1)
{
// attend une commande

// indiquer au serveur la prise en charge de la commande

//// recherche de la destination



// Livraison 
int Temps = 1;
int PosX,PosY,PosXArrivee,PosYArrivee,DeplX,DeplY;
if ((idM = shmget(CLE,0,0)) == -1)
   { perror("Err de msgget()");
     exit(1);
   }
Memoire = (MEMOIRE*)shmat(idM,NULL,0);
Memoire->X = Donnee[4].PosReel.L;
Memoire->Y =  Donnee[4].PosReel.C;

i = 0;
PosX = Donnee[Troncon[Indice].S1[i]].PosReel.L;
PosXArrivee = Donnee[Troncon[Indice].S1[i+1]].PosReel.L;
DeplX = (PosXArrivee- PosX )/TEMPS;
PosY = Donnee[Troncon[Indice].S1[i]].PosReel.C;
PosYArrivee = Donnee[Troncon[Indice].S1[i+1]].PosReel.C;
DeplY = (PosYArrivee- PosY )/TEMPS;
//Trace("Depart %d - %d",PosX,PosY);
//Trace("Arrivee %d - %d",PosXArrivee,PosYArrivee);
Memoire->X = PosX;
Memoire->Y = PosY;
while (1)
	{
	sleep(1);
	Memoire->X += DeplX;
	Memoire->Y += DeplY;
	if (Temps != TEMPS) 
		{
		Temps++;
		continue;
		}
	Temps = 0;

	if (strcmp(Donnee[Troncon[Indice].S1[i+1]].Station,Ville) == 0) break;
	i++;
	PosX = Donnee[Troncon[Indice].S1[i]].PosReel.L;
	PosXArrivee = Donnee[Troncon[Indice].S1[i+1]].PosReel.L;
	DeplX = (PosXArrivee- PosX )/TEMPS;
	PosY = Donnee[Troncon[Indice].S1[i]].PosReel.C;
	PosYArrivee = Donnee[Troncon[Indice].S1[i+1]].PosReel.C;
	DeplY = (PosYArrivee- PosY )/TEMPS;
	}
// Rentre en A4


Memoire->X = Donnee[4].PosReel.L;
Memoire->Y =  Donnee[4].PosReel.C;
// signale que la commande est livree
sleep(5);
}
}

void Fct(int Sig)
{
Trace("Reception d un signal %d",Sig);

           		
}
