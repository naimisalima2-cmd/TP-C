#include "ListePersonnelDynamique.h"
#include <iostream>
using namespace std;

// Constructeur — initialise un tableau dynamique
ListePersonnelDynamique::ListePersonnelDynamique(int t)
{
    taille = t;
    nb = 0;
    tab = new Personnel*[taille];
}

// Destructeur — libère la mémoire du tableau (mais pas les objets pointés)
ListePersonnelDynamique::~ListePersonnelDynamique()
{
    delete[] tab;
}

// Doublement automatique du tableau
void ListePersonnelDynamique::doubleTableau()
{
    int nouvelleTaille = taille * 2;
    Personnel** nouveau = new Personnel*[nouvelleTaille];

    // copier anciens éléments
    for (int i = 0; i < nb; i++)
        nouveau[i] = tab[i];

    // libérer l’ancien tableau
    delete[] tab;

    tab = nouveau;
    taille = nouvelleTaille;

    cout << ">> Tableau agrandi à " << taille << " éléments.\n";
}

// Ajouter un personnel
void ListePersonnelDynamique::ajoutPersonnel(Personnel* p)
{
    if (nb == taille)
        doubleTableau();   

    tab[nb++] = p;
}

// Afficher les salaires avec polymorphisme
void ListePersonnelDynamique::afficherSalaires() const
{
    cout << "\n--- Salaires (tableau dynamique) ---\n";

    for (int i = 0; i < nb; i++) {
        cout << tab[i]->getNom() << " " << tab[i]->getPrenom()
             << " : " << tab[i]->calculSalaire() << " €" << endl;
    }
}
