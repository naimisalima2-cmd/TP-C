#include "PersonnelAdmin.h"
#include <iostream>
using namespace std;

int main() {
    cout << "===== Test PersonnelAdmin =====\n";

    PersonnelAdmin admin("Dupont", "Alice",
                         2000,   // salaire
                         20,     // taux heure sup
                         10,     // heures sup
                         "Paris", "0655443322");

    admin.affiche();

    cout << "\nSalaire calculé : " << admin.calculSalaire() << endl;

    return 0;
}
