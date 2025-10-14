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

void Date::saisie() {
    int j, m, a;
    do {
        cout << "Entrez le jour : "; cin >> j;
    } while (!checkDate(j, 1, 2000));

    do {
        cout << "Entrez le mois : "; cin >> m;
    } while (m < 1 || m > 12);

    do {
        cout << "Entrez l'annee : "; cin >> a;
    } while (a < 2000 || a > 2050);

    jour = j;
    mois = m;
    annee = a;
}

bool Date::checkDate(int j, int m, int a) const {
    if (j < 1 || j > 31) return false;
    if (m < 1 || m > 12) return false;
    if (a < 2000 || a > 2050) return false;
    return true;
}

int Date::getJour() const { return jour; }
int Date::getMois() const { return mois; }
int Date::getAnnee() const { return annee; }

void Date::setJour(int j) { if (checkDate(j, mois, annee)) jour = j; }
void Date::setMois(int m) { if (checkDate(jour, m, annee)) mois = m; }
void Date::setAnnee(int a) { if (checkDate(jour, mois, a)) annee = a; }

void Date::affiche() const {
    cout << jour << "/" << mois << "/" << annee;
}
