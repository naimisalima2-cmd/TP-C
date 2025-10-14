#include "Date.h"
#include <iostream>
using namespace std;


bool Date::checkDate(int j, int m, int a){
    if (j < 1 || j> 31) {
        return false;
    }
    else if (m < 1 || m >12){
        return false;
    }
    else if (a < 2000 || a >2050){
        return false;    }
    else return true;
}


Date::Date(int j, int m, int a) {
    if (checkDate(j, m, a)==true) {
        jour = j;
        mois = m;
        annee = a;
    }
    else {
        jour = 1;
        mois = 1;
        annee = 2000;
    }
}
int Date::getJour() const {
     return jour; }
int Date::getMois() const {
    return mois;}
int Date::getAnnee() const {
    return annee;}
void Date::setJour(int j) { 
    if (checkDate(jour, mois, annee)) jour = j; }
void Date::setMois(int m) {
    if (checkDate(jour, mois, annee)) mois=m;}
void Date::setAnnee(int a) {
    if (checkDate(jour, mois, annee)) annee=a;}

void Date::affiche() const {
    cout << jour << "/" << mois << "/" << annee << endl ;
}

