#include "Vecteur.h"
#include <iostream>

Vecteur::Vecteur(int n)
{
    nombreElements = n;
    elements = new int[n];

    for (int i = 0; i < n; i++)
        elements[i] = 0;
}

Vecteur::~Vecteur()
{
    delete[] elements;
}

int& Vecteur::operator[](int index)
{
    if (index < 0 || index >= nombreElements)
    {
        VecteurLimite limite; 
        throw limite;           
    }

    return elements[index];
}
