#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>
using namespace std;

class Vector {
private:
    double* data;
    int n;
    static int count;