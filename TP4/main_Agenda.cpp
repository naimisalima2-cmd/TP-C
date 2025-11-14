#include "Agenda.h"
#include "RDV.h"
#include "Date.h"
#include "Heure.h"
#include <iostream>
using namespace std;

int main() {
    Agenda agenda;  

    RDV r1;
    r1.setDate(Date(12, 2, 2025));
    r1.setHeure(Heure(9, 45));
    r1.setLieu("Salle de réunion - Bâtiment A");
    r1.setNombreDeParticipants(3);
    string participants1[] = {"Pierre Dupont", "Claire Martin", "Julien Bernard"};
    r1.setParticipants(participants1);

    RDV r2;
    r2.setDate(Date(17, 3, 2025));
    r2.setHeure(Heure(11, 30));
    r2.setLieu("Campus Marseille - Salle 204");
    r2.setNombreDeParticipants(2);
    string participants2[] = {"Sophie Leroy", "Thomas Morel"};
    r2.setParticipants(participants2);

    RDV r3;
    r3.setDate(Date(5, 4, 2025));
    r3.setHeure(Heure(16, 00));
    r3.setLieu("Bureau du Directeur");
    r3.setNombreDeParticipants(1);
    string participants3[] = {"Emma Robert"};
    r3.setParticipants(participants3);

    agenda.ajoute(r1);
    agenda.ajoute(r2);
    agenda.ajoute(r3);

    cout << "=== Agenda (pile complète) ===" << endl;
    agenda.affiche();

    cout << "\n=== Suppression du RDV au sommet de la pile ===" << endl;
    agenda.enleve();
    agenda.affiche();

    cout << "\n=== Vidage de la pile ===" << endl;
    agenda.enleve();
    agenda.enleve();

    cout << "\n=== Agenda vide ===" << endl;
    agenda.affiche();

    return 0;
}
