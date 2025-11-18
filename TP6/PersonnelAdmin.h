#ifndef PERSONNELADMIN_H
#define PERSONNELADMIN_H

#include "Personnel.h"
#include <string>
using namespace std;

class PersonnelAdmin : public Personnel {
private:
    int heuresSup;
    float taux;

public:
    // Constructeur
    PersonnelAdmin(string nom, string prenom,
                   float salaire = 0,
                   float taux = 0,
                   int heuresSup = 0,
                   string adresse = "",
                   string telephone = "");

    // Getters & Setters
    int getHeuresSup() const;
    float getTaux() const;

    void setHeuresSup(int h);
    void setTaux(float t);

    virtual float calculSalaire() const override;

    // Affichage
    virtual void affiche() const override;
};

#endif
