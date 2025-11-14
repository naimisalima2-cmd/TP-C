#include "Agenda.h"
#include <iostream>
using namespace std;

Agenda::Agenda() : premier(nullptr) {}

Agenda::Agenda(const Agenda& other) : premier(nullptr) {
    // Copie simple : on empile dans le même ordre
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
    nouveau->setSuivant(premier);
    premier = nouveau;
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
}
