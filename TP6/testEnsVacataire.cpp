#include "EnseignantVacataire.h"
#include <iostream>
using namespace std;

int main() {
    cout << "===== Test Enseinant Vacataire =====\n";

    EnseignantVacataire ev("Ben Ali", "Sami",
                           0,      // salaire de base 
                           40,     // taux par heure
                           "Casier 12",
                           20,     // nbre heures
                           "Marseille",
                           "0622334455");

    ev.affiche();

    cout << "\nSalaire calculé = " << ev.calculSalaire() << endl;

    return 0;
}
