#ifndef LISTEPERSONNELOBJETS_H
#define LISTEPERSONNELOBJETS_H

#include "Personnel.h"
#include <string>
#include <iostream>
using namespace std;

class ListePersonnelObjets {
private:
    Personnel tab[100];   // tableau d’objets 
    int nb;

public:
    ListePersonnelObjets();
    void ajoutPersonnel(const Personnel& p);
    void afficherSalaires() const;
};

#endif
