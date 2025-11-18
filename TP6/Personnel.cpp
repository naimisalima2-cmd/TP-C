#include "Personnel.h"
#include <iostream>
using namespace std;

// Constructeur
Personnel::Personnel(string nom, string prenom,
                     float salaire,
                     string adresse, string telephone)
    : Personne(nom, prenom, adresse, telephone),
      salaire(salaire) {}

// Getter
float Personnel::getSalaire() const { return salaire; }

// Setter
void Personnel::setSalaire(float s) { salaire = s; }

// Pas de calculSalaire()  (fonction virtuelle pure)
