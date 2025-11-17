#include "Agenda.h"
#include "RDV.h"
#include "Date.h"
#include "Heure.h"
#include <iostream>
using namespace std;

int main() {
    Agenda agenda;
    RDV a;
    a.setDate(Date(20, 3, 2025));
    a.setHeure(Heure(14, 30));
    a.setLieu("Réunion Projet");

    RDV b;
    b.setDate(Date(12, 2, 2025));   
    b.setHeure(Heure(9, 45));
    b.setLieu("Bureau RH");

    RDV c;
    c.setDate(Date(5, 4, 2025));
    c.setHeure(Heure(10, 00));
    c.setLieu("Salle 204");

    RDV d;
    d.setDate(Date(20, 3, 2025));   
    d.setHeure(Heure(8, 15));
    d.setLieu("Café Central");

    agenda.ajoute(a);
    agenda.ajoute(b);
    agenda.ajoute(c);
    agenda.ajoute(d);

    cout << "=== Agenda trie automatiquement ===\n";
    agenda.affiche();

    cout << "\n=== Suppression du premier RDV ===\n";
    agenda.enleve();
    agenda.affiche();


    return 0;
}
