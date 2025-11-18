#ifndef ELEVE_H
#define ELEVE_H
#include <string>


class Eleve : public Personne {
private:
    string promotion;
    string groupeTD;
    float GPA;

public:
    Eleve(string nom, string prenom,
          string promotion = "",
          float GPA = -1,
          string groupeTD = "",
          string adresse = "",
          string telephone = "");
    //Getters
    string getPromotion() const;
    string getGroupeTD() const;
    float getGPA() const;

    // Setters
    void setPromotion(const string& p);
    void setGroupeTD(const string& g);
    void setGPA(float g);
    // Affichage
    void affiche() const;
};

#endif
