#include <iostream>
#include "Vecteur.h"
#include "VecteurLimite.h"
using namespace std;

int main()
{
    try
    {
        Vecteur v(5);

        v[2] = 10;
        cout << v[2] << endl;

        cout << v[10] << endl;   
    }
    catch (VecteurLimite)
    {
        cout << "exception limite\n";
    }
    return 0;
}

