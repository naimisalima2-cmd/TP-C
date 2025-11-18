#include "EnseignantPermanent.h"
#include <iostream>
using namespace std;

// Constructeur
EnseignantPermanent::EnseignantPermanent(string nom, string prenom,
                                         float salaire,
                                         int grade,
                                         float primeMensuelle,
                                         string bureau,
                                         string adresse, string telephone)
    : Personnel(nom, prenom, salaire, adresse, telephone),
      bureau(bureau), grade(grade), primeMensuelle(primeMensuelle) {}

// Getters
string EnseignantPermanent::getBureau() const { return bureau; }
int EnseignantPermanent::getGrade() const { return grade; }
float EnseignantPermanent::getPrimeMensuelle() const { return primeMensuelle; }

// Setters
void EnseignantPermanent::setBureau(const string& b) { bureau = b; }
void EnseignantPermanent::setGrade(int g) { grade = g; }
void EnseignantPermanent::setPrimeMensuelle(float p) { primeMensuelle = p; }

// calculSalaire = salaire + (grade * primeMensuelle / 100)
float EnseignantPermanent::calculSalaire() const {
    return getSalaire() + (grade * primeMensuelle / 100.0f);
}

// Affichage
void EnseignantPermanent::affiche() const {
    Personnel::affiche();
    cout << "Bureau : " << bureau << endl;
    cout << "Grade : " << grade << endl;
    cout << "Prime Mensuelle : " << primeMensuelle << endl;
    cout << "Salaire total (avec prime) : " << calculSalaire() << endl;
}
