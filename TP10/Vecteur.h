#ifndef VECTEUR_H
#define VECTEUR_H

class Vecteur
{
private:
    int nombreElements;
    int* elements;

public:
    Vecteur(int);
    ~Vecteur();
    int& operator[](int);
};

#endif
