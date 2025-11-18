#ifndef LISTEPERSONNEL_H
#define LISTEPERSONNEL_H

#include "Personnel.h"
#include <string>
#include <iostream>
using namespace std;

class ListePersonnel {
private:
    Personnel* tab[100];   // tableau de pointeurs
    int nb;

public:
    ListePersonnel();                       // constructeur
    void ajoutPersonnel(Personnel* p);      // ajout
    void afficherSalaires() const;          // affichage
};

#endif
