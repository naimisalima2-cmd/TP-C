#include "ArrayOfInteger.h"
#include <iostream>
#include <algorithm>

int ArrayOfInteger::instanceCount = 0;

ArrayOfInteger::ArrayOfInteger() {
    capacite = 10;
    taille = 0;
    Tab = new int[capacite];
    instanceCount++;
}

ArrayOfInteger::ArrayOfInteger(int tailleInitiale) {
    capacite = (tailleInitiale > 0) ? tailleInitiale : 10;
    taille = 0;
    Tab = new int[capacite];
    instanceCount++;
}

ArrayOfInteger::ArrayOfInteger(const ArrayOfInteger& other) {
    capacite = other.capacite;
    taille = other.taille;
    Tab = new int[capacite];
    for (int i = 0; i < taille; i++) {
        Tab[i] = other.Tab[i];
    }
    instanceCount++;
}

ArrayOfInteger::~ArrayOfInteger() {
    delete[] Tab;
    instanceCount--;
}

void ArrayOfInteger::afficher() const {
    for (int i = 0; i < taille; i++) {
        std::cout << Tab[i] << " ";
    }
    std::cout << std::endl;
}

bool ArrayOfInteger::appartient(int value) const {
    for (int i = 0; i < taille; i++) {
        if (Tab[i] == value) return true;
    }
    return false;
}

void ArrayOfInteger::ajouter(int value) {
    if (!appartient(value)) {
        if (taille >= capacite) {              
            capacite *= 2;
            int* newTab = new int[capacite];
            for (int i = 0; i < taille; i++) {
                newTab[i] = Tab[i];
            }
            delete[] Tab;
            Tab = newTab;
        }
        Tab[taille] = value;
        taille++;
    }
}

void ArrayOfInteger::retirer(int value) {
    int index = -1;
    for (int i = 0; i < taille; i++) {
        if (Tab[i] == value) {
            index = i;
            break;
        }
    }
    if (index != -1) {
        for (int i = index; i < taille - 1; i++) {
            Tab[i] = Tab[i + 1];
        }
        taille--;
    }
}

bool ArrayOfInteger::estIdentique(const ArrayOfInteger& other) const {
    if (taille != other.taille) return false;
    int* copy1 = new int[taille];
    int* copy2 = new int[taille];
    for (int i = 0; i < taille; i++) {
        copy1[i] = Tab[i];
        copy2[i] = other.Tab[i];
    }
    std::sort(copy1, copy1 + taille);
    std::sort(copy2, copy2 + taille);
    for (int i = 0; i < taille; i++) {
        if (copy1[i] != copy2[i]) {
            delete[] copy1;
            delete[] copy2;
            return false;
        }
    }
    delete[] copy1;
    delete[] copy2;
    return true;
}

int ArrayOfInteger::getInstanceCount() {
    return instanceCount;
}
