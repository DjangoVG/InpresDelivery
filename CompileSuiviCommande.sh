echo Creation de SuiviCommande                 

g++ -c -m64 $HOME/Ecran.cpp -D SUN

g++ -c -m64 -D_XOPEN_SOURCE=600 -D__EXTENSIONS__ -O2 -Wall -W -D_REENTRANT\
    -DQT_NO_DEBUG -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED -I/opt/Qt4.8/mkspecs/solaris-g++-64\
    -I. -I/opt/Qt4.8/include/QtCore -I/opt/Qt4.8/include/QtGui -I/opt/Qt4.8/include -I.\
    -I/usr/include -I/usr/X11/include -I $HOME/Ecran -o mainSuivi.o mainSuivi.cpp

g++ -c -m64 -D_XOPEN_SOURCE=600 -D__EXTENSIONS__ -O2 -Wall -W -D_REENTRANT\
    -DQT_NO_DEBUG -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED -I/opt/Qt4.8/mkspecs/solaris-g++-64\
    -I. -I/opt/Qt4.8/include/QtCore -I/opt/Qt4.8/include/QtGui -I/opt/Qt4.8/include -I.\
    -I/usr/include -I/usr/X11/include -I $HOME/Ecran -o MainsuiviCommande.o MainsuiviCommande.cpp

g++ -c -m64 -D_XOPEN_SOURCE=600 -D__EXTENSIONS__ -O2 -Wall -W -D_REENTRANT\
    -DQT_NO_DEBUG -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED -I/opt/Qt4.8/mkspecs/solaris-g++-64\
    -I. -I/opt/Qt4.8/include/QtCore -I/opt/Qt4.8/include/QtGui -I/opt/Qt4.8/include -I.\
    -I/usr/include -I/usr/X11/include -I $HOME/Ecran -o moc_MainsuiviCommande.o moc_MainsuiviCommande.cpp

g++ -m64 -Wl,-R,/opt/Qt4.8/lib -o SuiviCommande mainSuivi.o  MainsuiviCommande.o\
     moc_MainsuiviCommande.o  Ecran.o  -L/usr/lib/64 -L/usr/X11/lib/64 -L/opt/Qt4.8/lib -lQtGui\
     -L/opt/Qt4.8/lib -L/usr/lib/64 -L/usr/X11/lib/64 -lQtCore -lpthread -lrt

