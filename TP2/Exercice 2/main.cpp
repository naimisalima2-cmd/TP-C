#include <iostream>
#include "Vector.h"

int main() {
    Vector v1(3, 1.0);   
    Vector v2(3, 2.0);   
    std::cout << "v1 : "; v1.afficher();
    std::cout << "v2 : "; v2.afficher();

    std::cout << "Norme de v1 : " << v1.calculerNorme() << std::endl;
    std::cout << "Produit scalaire v1.v2 : " << v1.produitScalaire(v2) << std::endl;

    Vector v3 = v1.additionner(v2);
    std::cout << "v1 + v2 = "; v3.afficher();

    Vector v4 = v1.multiplicationParReel(3);
    std::cout << "v1 * 3 = "; v4.afficher();

    std::cout << "v1 egal a v2 ? " << (v1.estEgal(v2) ? "Oui" : "Non") << std::endl;

    std::cout << "Nombre d'instances : " << Vector::getCompteurInstances() << std::endl;

    return 0;
}
