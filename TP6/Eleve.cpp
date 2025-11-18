#include "Eleve.h"
#include <iostream>
using namespace std;

// Constructeur
Eleve::Eleve(string nom, string prenom,
             string promotion, float GPA,
             string groupeTD,
             string adresse, string telephone)
    : Personne(nom, prenom, adresse, telephone),
      promotion(promotion), GPA(GPA), groupeTD(groupeTD) {}
// Getters
string Eleve::getPromotion() const { return promotion; }
string Eleve::getGroupeTD() const { return groupeTD; }
float Eleve::getGPA() const { return GPA; }

// Setters
void Eleve::setPromotion(const string& p) { promotion = p; }
void Eleve::setGroupeTD(const string& g) { groupeTD = g; }
void Eleve::setGPA(float g) { GPA = g; }

// Affichage complet
void Eleve::affiche() const {
    // Appel de Personne::affiche()
    Personne::affiche();

    cout << "Promotion : " << promotion << endl;
    cout << "Groupe TD : " << groupeTD << endl;
    cout << "GPA : " << GPA << endl;
}
