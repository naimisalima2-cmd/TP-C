#include "EnseignantVacataire.h"
#include <iostream>
using namespace std;

// Constructeur
EnseignantVacataire::EnseignantVacataire(string nom, string prenom,
                                         float salaire,
                                         float taux,
                                         string casier,
                                         int nbreHeures,
                                         string adresse, string telephone)
    : Personnel(nom, prenom, salaire, adresse, telephone),
      casier(casier), nbreHeures(nbreHeures), taux(taux) {}

// Getters
string EnseignantVacataire::getCasier() const { return casier; }
int EnseignantVacataire::getNbreHeures() const { return nbreHeures; }
float EnseignantVacataire::getTaux() const { return taux; }

// Setters
void EnseignantVacataire::setCasier(const string& c) { casier = c; }
void EnseignantVacataire::setNbreHeures(int h) { nbreHeures = h; }
void EnseignantVacataire::setTaux(float t) { taux = t; }

// calculSalaire = taux × nbreHeures
float EnseignantVacataire::calculSalaire() const {
    return taux * nbreHeures;
}

// Affichage
void EnseignantVacataire::affiche() const {
    Personnel::affiche();
    cout << "Casier : " << casier << endl;
    cout << "Nombre d'heures : " << nbreHeures << endl;
    cout << "Taux horaire : " << taux << endl;
    cout << "Salaire total : " << calculSalaire() << endl;
}
