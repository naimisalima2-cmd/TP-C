#include "PersonnelAdmin.h"
#include <iostream>
using namespace std;

// Constructeur
PersonnelAdmin::PersonnelAdmin(string nom, string prenom,
                               float salaire,
                               float taux,
                               int heuresSup,
                               string adresse, string telephone)
    : Personnel(nom, prenom, salaire, adresse, telephone),
      heuresSup(heuresSup), taux(taux) {}

// Getters
int PersonnelAdmin::getHeuresSup() const { return heuresSup; }
float PersonnelAdmin::getTaux() const { return taux; }

// Setters
void PersonnelAdmin::setHeuresSup(int h) { heuresSup = h; }
void PersonnelAdmin::setTaux(float t) { taux = t; }

// calculSalaire = salaire de base + (taux * heuresSup)
float PersonnelAdmin::calculSalaire() const {
    return getSalaire() + taux * heuresSup;
}

// Affichage
void PersonnelAdmin::affiche() const {
    Personnel::affiche();

    cout << "Heures supplémentaires : " << heuresSup << endl;
    cout << "Taux horaire : " << taux << endl;
    cout << "Salaire total (avec heures sup) : " << calculSalaire() << endl;
}
