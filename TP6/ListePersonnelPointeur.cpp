#include "ListePersonnel.h"

ListePersonnel::ListePersonnel() : nb(0) {}

void ListePersonnel::ajoutPersonnel(Personnel* p) {
    if (nb < 100) {
        tab[nb] = p;
        nb++;
    } else {
        cout << "Liste pleine !" << endl;
    }
}

void ListePersonnel::afficherSalaires() const {
    cout << "\n===== Liste des salaires =====" << endl;

    for (int i = 0; i < nb; i++) {
        cout << tab[i]->getNom() << " "
             << tab[i]->getPrenom()
             << " → Salaire : " << tab[i]->calculSalaire()
             << endl;
    }
}
