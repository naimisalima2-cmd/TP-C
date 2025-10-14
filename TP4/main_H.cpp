#include "Heure.h"

int main() {
    Heure h1;
    h1.affiche();

    Heure h2(14, 30);
    h2.affiche();

    Heure h3(25, 70);
    h3.affiche();

    h2.setHeures(9);
    h2.setMinutes(45);
    h2.affiche();

    return 0;
}
