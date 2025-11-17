#include "Heure.h"
#include <iostream>
using namespace std;

Heure::Heure() {
    heures = 0;
    minutes = 0;
}

Heure::Heure(int h, int m) {
    if (h >= 0 && h <= 23) heures = h; else heures = 0;
    if (m >= 0 && m <= 59) minutes = m; else minutes = 0;
}

void Heure::saisie() {
    int h, m;
    do {
        cout << "Entrez l'heure (0-23) : "; cin >> h;
    } while (h < 0 || h > 23);

    do {
        cout << "Entrez les minutes (0-59) : "; cin >> m;
    } while (m < 0 || m > 59);

    heures = h;
    minutes = m;
}

void Heure::affiche() const {
    cout << (heures < 10 ? "0" : "") << heures << ":"
         << (minutes < 10 ? "0" : "") << minutes;
}

int Heure::getHeures() const { return heures; }
int Heure::getMinutes() const { return minutes; }
void Heure::setHeures(int h) { if (h >= 0 && h <= 23) heures = h; }
void Heure::setMinutes(int m) { if (m >= 0 && m <= 59) minutes = m; }

bool Heure::estEgal(const Heure& h) const {
    return heures == h.heures && minutes == h.minutes;
}

bool Heure::estSuperieur(const Heure& h) const {
    if (heures != h.heures) return heures > h.heures;
    return minutes > h.minutes;
}
