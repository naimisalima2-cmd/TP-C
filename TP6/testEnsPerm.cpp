#include "EnseignantPermanent.h"
#include <iostream>
using namespace std;

int main() {
    EnseignantPermanent ep("Karoui", "Ahmed",
                           3000,     // salaire de base
                           4,        // grade
                           150,      // prime mensuelle
                           "Bureau B12",
                           "Tunis",
                           "22556644");

    ep.affiche();

    cout << "\nSalaire calculé = " << ep.calculSalaire() << endl;

    return 0;
}
