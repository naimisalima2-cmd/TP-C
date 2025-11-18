#ifndef ENSEIGNANTVACATAIRE_H
#define ENSEIGNANTVACATAIRE_H

#include "Personnel.h"
#include <string>
using namespace std;

class EnseignantVacataire : public Personnel {
private:
    string casier;
    int nbreHeures;
    float taux;

public:
    // Constructeur 
    EnseignantVacataire(string nom, string prenom,
                        float salaire,
                        float taux,
                        string casier,
                        int nbreHeures = 0,
                        string adresse = "",
                        string telephone = "");

    // Getters
    string getCasier() const;
    int getNbreHeures() const;
    float getTaux() const;

    // Setters
    void setCasier(const string& c);
    void setNbreHeures(int h);
    void setTaux(float t);

    // calculSalaire = taux * nbreHeures
    float calculSalaire() const;

    // Affichage
    void affiche() const;
};

#endif
