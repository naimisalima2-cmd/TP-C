#ifndef HEURE_H
#define HEURE_H

#include <iostream>
using namespace std;

class Heure {
private:
    int heures;
    int minutes;

public:
    Heure();
    Heure(int h, int m);
    void saisie();
    void affiche() const;
    int getHeures() const;
    int getMinutes() const;
    void setHeures(int h);
    void setMinutes(int m);
};

#endif
