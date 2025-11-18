#include "Personne.h"
#include <iostream>
using namespace std;

// Constructeur
Personne::Personne(string nom, string prenom, string adresse, string telephone)
    : nom(nom), prenom(prenom), adresse(adresse), telephone(telephone) {}

// Getters
string Personne::getNom() const { return nom; }
string Personne::getPrenom() const { return prenom; }
string Personne::getAdresse() const { return adresse; }
string Personne::getTelephone() const { return telephone; }

// Setters
void Personne::setNom(const string& n) { nom = n; }
void Personne::setPrenom(const string& p) { prenom = p; }
void Personne::setAdresse(const string& a) { adresse = a; }
void Personne::setTelephone(const string& t) { telephone = t; }

// Affichage
void Personne::affiche() const {
    cout << "Nom : " << nom << endl;
    cout << "Prenom : " << prenom << endl;
    cout << "Adresse : " << adresse << endl;
    cout << "Telephone : " << telephone << endl;
}
