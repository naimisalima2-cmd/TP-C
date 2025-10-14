#include "Date.h"
#include<iostream>
using namespace std;

int main() {

    Date d1;
    cout << "This is the by default constructor:" << endl;
    d1.affiche();

    cout << "This is the by 3 inputs constructor:" << endl;
    Date d2(40,2,2025);
    d2.affiche();

    cout << "This is the by 3 inputs constructor:" << endl;
    Date d3(25,20,2025);
    d3.affiche();

    cout << "This is the by 3 inputs constructor d4:" << endl;
    Date d4(12,10,2002);
    d4.affiche();


}