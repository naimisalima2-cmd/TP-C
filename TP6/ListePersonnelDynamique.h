#ifndef LISTEPERSONNELDYNAMIQUE_H
#define LISTEPERSONNELDYNAMIQUE_H

#include "Personnel.h"

class ListePersonnelDynamique {
private:
    Personnel** tab;   // tableau dynamique de pointeurs
    int taille;        // taille actuelle du tableau
    int nb;            // nombre d'éléments utilisés

    void doubleTableau(); // redimensionnement

public:
    ListePersonnelDynamique(int t = 5);
    ~ListePersonnelDynamique();

    void ajoutPersonnel(Personnel* p);
    void afficherSalaires() const;
};

#endif
