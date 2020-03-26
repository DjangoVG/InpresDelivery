#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <sys/shm.h>
#include <signal.h>


#include "Ecran.h"
#include "Commun.ini"
#include "Donnee.dat"

int				idQ,idS,idM;
//char				*pShm;
TABSERVEUR*			TabServeur;
int				hdP[2];

ELEMENT	Element[] = 
	{
	{1,"Kit malt Blanche",1,"./Images/KitMaltBlanche.jpg"},
	{2,"Kit Malt Blonde",2,"./Images/KitMaltBlonde.jpg"},
	{3,"Kit Bierre Pils",2,"./Images/KitBierrePils.jpg"},
	{4,"Kit Malt AngelDark",2,"./Images/KitMalt-AngelDark.jpg"},
	{104,"Fond Filtrant",2,"./Images/FondFiltrantt.jpg"},
	{103,"cuve de brassage",2,"./Images/cuve-de-brassage.jpg"},
	{101,"refroidisseur",2,"./Images/refroidisseur.jpg"},
	{105,"moulin a malt",2,"./Images/mounin-a-malt.jpg"},
	{102,"Refroidisseur2",2,"./Images/Refroidisseur2.jpg"}
	};

MESSAGE					Message;

void Affiche();

int	main()
{
int Indice,i,j;
int		Article,Signe;
char		Buff[80],Buff2[20],Buff3[20],Buff4[20];
int		Commande[10];
TabServeur = (TABSERVEUR*)malloc(sizeof(TABSERVEUR));
memcpy(TabServeur,Element,sizeof(Element));

// Creation des ressources
// Creation des ipc
if ((idQ = msgget(CLE,IPC_CREAT | IPC_EXCL |0666)) == -1)
   { perror("Err de msgget()");
     exit(1);
   }
   
// Creation des processus , pipe


Trace("idQ = %d : idM = %d : idS = ",idQ,idM,idS);
TabServeur->idServeur1 = getpid();
Affiche();

while (1)
   { 
   if (msgrcv(idQ,&Message,TAILLEMESSAGE,1L,0) == -1)
		{ perror("Err. de msgrcv()");
		exit(1);
		}
	Trace("Message recu\n");
	switch (Message.Requete)
		{ 
		case CONNECT :
			Trace("Message CONNECT");
						
			Affiche();
			break;
            
		case MATERIEL : 
			Trace("Message MATERIEL");
			
			break;
         	
		case BRASSAGE :
			Trace("Message BRASSAGE");
         
			break;
			   		
		case ARTICLECOMMANDE :
			Trace("Message MESSAGECOMMANDE");
         
			break;
       
		case PASSERCOMMANDE :
			Trace("Reception d une commande");
			
			break;
				
		case ANNULERCOMMANDE :
			Trace("Message ANNULERCOMMANDE");
			
			break;
			
			case PRISEENCHARGE:
			
			break;
 
			case SUIVICOMMANDE:
		
			break;
			
      	case IDENTIFICATIONSUIVI:
      		
         break;
         case COMMANDELIVREE:
          
	     	break;
	     	case RETRAITCOMMANDE:
	     		
	     	break;

		}
   }
}

void Affiche()
{
printf("idServeur1 : %d\n",TabServeur->idServeur1);
//printf("idServeur2 : %d\n",TabServeur->idServeur2);
printf("idServiceLivraison : %d\n\n",TabServeur->idServiceLivraison);
printf("Client:\n");
int	i = 0;
while (i < MAXCLIENT)
   {
   printf("Cl%d : %5d -%s--%s--%5d\n",i,TabServeur->Cl[i].idPid,TabServeur->Cl[i].NomClient,
            TabServeur->Cl[i].Ville,TabServeur->Cl[i].idVehicule);
   i++;
   }

}
