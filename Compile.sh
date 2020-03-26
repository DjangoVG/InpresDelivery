echo Creation de Ecran.o
g++ -c $HOME/Ecran/Ecran.cpp -DSUN -m64 -I $HOME/Ecran

echo Creation de Serveur
g++ -o Serveur Serveur.cpp Ecran.o -m64 -I $HOME/Ecran 

sh CompileClient.sh

sh CompileSuiviCommande.sh

sh CompileAffichage.sh

echo Creation de ServiceLivraison
g++ -o ServiceLivraison ServiceLivraison.cpp Ecran.o -m64 -I $HOME/Ecran 

echo Creation de VehiculeLivraison
g++ -o VehiculeLivraison VehiculeLivraison.cpp Ecran.o -m64 -I $HOME/Ecran 
	
