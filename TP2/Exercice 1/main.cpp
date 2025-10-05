#include <iostream>
#include "Point.h"

using namespace std;

int main() {
    cout << "Nombre de points: " << Point::getCompteur() << endl;

    Point p1;          
    Point p2(1, 2, 3); 
    Point p3(p2);      

    cout << "\nPoints crees:" << endl;
    p1.afficher();
    p2.afficher();
    p3.afficher();

    cout << "\nSaisie d'un point p1:" << endl;
    p1.saisir();
    p1.afficher();

    cout << "\nTranslation de p1 de (1,1,1):" << endl;
    p1.translater(1, 1, 1);
    p1.afficher();

    cout << "\nDistance entre p1 et p2: " << p1.distance(p2) << endl;

    cout << "\nNombre de points existants: " << Point::getCompteur() << endl;

    return 0;
}
