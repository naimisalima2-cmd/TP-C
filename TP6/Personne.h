#ifndef PERSONNE_H
#define PERSONNE_H
#include <string>

using namespace std;

class Personne {
private:
    string nom;
    string prenom;
    string adresse;
    string telephone;

public:
    Personne(string nom, string prenom, string adresse = "", string telephone = "");

    // Getters
    string getNom() const;
    string getPrenom() const;
    string getAdresse() const;
    string getTelephone() const;

    // Setters
    void setNom(const string& n);
    void setPrenom(const string& p);
    void setAdresse(const string& a);
    void setTelephone(const string& t);

    // Méthode d'affichage
    void affiche() const;
};

#endif
