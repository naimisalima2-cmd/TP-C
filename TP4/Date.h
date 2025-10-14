#ifndef DATE_H
#define DATE_H

#include <iostream>
using namespace std;

class Date {
private:
    int jour;
    int mois;
    int annee;

public:
    Date();
    Date(int j, int m, int a);
    void saisie();
    void affiche() const;
    bool checkDate(int j, int m, int a) const;
    int getJour() const;
    int getMois() const;
    int getAnnee() const;
    void setJour(int j);
    void setMois(int m);
    void setAnnee(int a);
};

#endif
