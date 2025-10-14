#include <iostream>
#include "NoeudRDV.h"
#include "RDV.h"
using namespace std;

int main() {
    RDV r1; 
    r1.saisie(); 

    RDV r2;
    r2.saisie();

    NoeudRDV* n1 = new NoeudRDV(r1);
    NoeudRDV* n2 = new NoeudRDV(r2, n1);

    cout << "RDV 2 :" << endl;
    n2->getRDV().affiche();

    cout << "RDV suivant :" << endl;
    n2->getSuivant()->getRDV().affiche();

    delete n1;
    delete n2;
    return 0;
}
