#include "Date.h"
#include <iostream>
using namespace std;

Date::Date() {
    jour = 1;
    mois = 1;
    annee = 2000;
}

Date::Date(int j, int m, int a) {
    if (checkDate(j, m, a)) {
        jour = j;
        mois = m;
        annee = a;
    } else {
        jour = 1;
        mois = 1;
        annee = 2000;
    }
}

bool Date::checkDate(int j, int m, int a) const {
    if (j < 1 || j > 31) return false;
    if (m < 1 || m > 12) return false;
    if (a < 1900 || a > 2100) return false;
    return true;
}

void Date::saisie() {
    int j, m, a;

    do {
        cout << "Jour (1-31) : ";
        cin >> j;
    } while (j < 1 || j > 31);

    do {
        cout << "Mois (1-12) : ";
        cin >> m;
    } while (m < 1 || m > 12);

    do {
        cout << "Annee (1900-2100) : ";
        cin >> a;
    } while (a < 1900 || a > 2100);

    jour = j;
    mois = m;
    annee = a;
}

void Date::affiche() const {
    cout << jour << "/" << mois << "/" << annee;
}

bool Date::estEgal(const Date& d) const {
    return jour == d.jour && mois == d.mois && annee == d.annee;
}

bool Date::estSuperieur(const Date& d) const {
    if (annee != d.annee) return annee > d.annee;
    if (mois != d.mois) return mois > d.mois;
    return jour > d.jour;
}

int Date::getJour() const { return jour; }
int Date::getMois() const { return mois; }
int Date::getAnnee() const { return annee; }
