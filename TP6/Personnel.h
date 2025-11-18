#ifndef PERSONNEL_H
#define PERSONNEL_H

#include "Personne.h"
#include <string>
using namespace std;

class Personnel : public Personne {
private:
    float salaire;
    
public:
    // Constructeur 
    Personnel(string nom, string prenom,
              float salaire = 0,
              string adresse = "",
              string telephone = "");

    // Getter et Setter
    float getSalaire() const;
    void setSalaire(float s);

    // Méthode virtuelle pure 
    virtual float calculSalaire() const = 0;

    // Affichage 
    virtual void affiche() const {
        Personne::affiche();
        cout << "Salaire de base : " << salaire << endl;
    }
};

#endif
