#include "Agenda.h"
#include <iostream>
using namespace std;

Agenda::Agenda() : premier(nullptr) {}

Agenda::Agenda(const Agenda& other) : premier(nullptr) {
    NoeudRDV* temp = other.premier;
    while (temp) {
        ajoute(temp->getRDV());
        temp = temp->getSuivant();
    }
}

Agenda::~Agenda() {
    while (premier) {
        NoeudRDV* temp = premier;
        premier = premier->getSuivant();
        delete temp;
    }
}

void Agenda::ajoute(const RDV& r) {
    NoeudRDV* nouveau = new NoeudRDV(r);

    if (!premier || premier->getRDV().estSuperieur(r)) {
        nouveau->setSuivant(premier);
        premier = nouveau;
        return;
    }

    NoeudRDV* courant = premier;
    while (courant->getSuivant() &&
           !courant->getSuivant()->getRDV().estSuperieur(r)) {
        courant = courant->getSuivant();
    }

    nouveau->setSuivant(courant->getSuivant());
    courant->setSuivant(nouveau);
}

void Agenda::enleve() {
    if (premier) {
        NoeudRDV* temp = premier;
        premier = premier->getSuivant();
        delete temp;
    }
}

void Agenda::affiche() const {
    NoeudRDV* courant = premier;
    while (courant) {
        courant->getRDV().affiche();
        cout << "-------------------------\n";
        courant = courant->getSuivant();
    }
void Agenda::vider() {
    while (premier) enleve(); }
}
