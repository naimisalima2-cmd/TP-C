#include "ListePersonnelObjets.h"

ListePersonnelObjets::ListePersonnelObjets() : nb(0) {}

void ListePersonnelObjets::ajoutPersonnel(const Personnel& p) {
    if (nb < 100) {
        tab[nb] = p;   // COPIE → slicing
        nb++;
    } else {
        cout << "Liste pleine !" << endl;
    }
}

void ListePersonnelObjets::afficherSalaires() const {
    cout << "\n===== Liste des salaires (sans pointeurs) =====" << endl;

    for (int i = 0; i < nb; i++) {
        cout << tab[i].getNom() << " "
             << tab[i].getPrenom()
             << " → Salaire : " << tab[i].calculSalaire()
             << endl;
    }
}
