#include "Personnel.h"
#include <iostream>
using namespace std;

int main() {
    cout << "===== Test Classe Personnel =====\n";

    Personnel p("Martin", "Paul", 2500, "Lyon", "0611223344");

    p.affiche();

    cout << "\nSalaire calculé = " << p.calculSalaire() << " €" << endl;

    p.setSalaire(2800);
    cout << "\nAprès augmentation :" << endl;
    p.affiche();

    return 0;
}
