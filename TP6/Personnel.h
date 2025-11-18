
#ifndef PERSONNEL_H
#define PERSONNEL_H

#include "Personne.h"
#include <string>
using namespace std;

class Personnel : public Personne {
private:
    float salaire;

public:
    // Constructeur (salaire par défaut = 0)
    Personnel(string nom, string prenom,
              float salaire = 0,
              string adresse = "",
              string telephone = "");

    // Getter et Setter
    float getSalaire() const;
    void setSalaire(float s);

    // Méthode calculSalaire()
    float calculSalaire() const;

    // Affichage
    void affiche() const;
};

#endif
