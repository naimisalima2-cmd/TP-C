#ifndef PERSONNELADMIN_H
#define PERSONNELADMIN_H

#include "Personnel.h"
using namespace std;

class PersonnelAdmin : public Personnel {
private:
    int heuresSup;
    float taux;

public:
    // Constructeur
    PersonnelAdmin(string nom, string prenom,
                   float salaire,
                   float taux,
                   int heuresSup = 0,
                   string adresse = "",
                   string telephone = "");

    // Getters & Setters
    int getHeuresSup() const;
    float getTaux() const;

    void setHeuresSup(int h);
    void setTaux(float t);

    float calculSalaire() const;

    // Affichage
    void affiche() const;
};

#endif
