#include "Heure.h"
#include <iostream>
using namespace std;

bool Heure::checkHeure(int h, int m) {
    return (h >= 0 && h <= 23) && (m >= 0 && m <= 59);
}

Heure::Heure(int h, int m) {
    if (checkHeure(h, m)) {
        heures = h; minutes = m;
    } else {
        heures = 0; minutes = 0;
    }
}

int Heure::getHeures() const { return heures; }
int Heure::getMinutes() const { return minutes; }

void Heure::setHeures(int h) { if (checkHeure(h, minutes)) heures = h; }
void Heure::setMinutes(int m) { if (checkHeure(heures, m)) minutes = m; }

void Heure::affiche() const {
    cout << (heures < 10 ? "0" : "") << heures << ":"
         << (minutes < 10 ? "0" : "") << minutes << endl;
}


