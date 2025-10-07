#ifndef ARRAYOFINTEGER_H
#define ARRAYOFINTEGER_H

class ArrayOfInteger {
private:
    int* Tab;
    int taille;     
    int capacite;    
    static int instanceCount;

public:
    ArrayOfInteger();
    ArrayOfInteger(int tailleInitiale);
    ArrayOfInteger(const ArrayOfInteger& other);
    ~ArrayOfInteger();

    void afficher() const;
    bool appartient(int value) const;
    void ajouter(int value);
    void retirer(int value);
    bool estIdentique(const ArrayOfInteger& other) const;
    static int getInstanceCount();
};

#endif
