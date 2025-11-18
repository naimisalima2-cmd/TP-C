#ifndef ENSEIGNANTPERMANENT_H
#define ENSEIGNANTPERMANENT_H

#include "Personnel.h"
#include <string>
using namespace std;

class EnseignantPermanent : public Personnel {
private:
    string bureau;
    int grade;
    float primeMensuelle;

public:
    EnseignantPermanent(string nom, string prenom,
                        float salaire,
                        int grade,
                        float primeMensuelle,
                        string bureau = "",
                        string adresse = "",
                        string telephone = "");

    // Getters
    string getBureau() const;
    int getGrade() const;
    float getPrimeMensuelle() const;

    // Setters
    void setBureau(const string& b);
    void setGrade(int g);
    void setPrimeMensuelle(float p);

    // CalculSalaire()
    float calculSalaire() const;

    // Affichage
    void affiche () const;
};

#endif
