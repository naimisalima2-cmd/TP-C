#ifndef DATE_H
#define DATE_H

class Date {
private:
    int jour, mois, annee;

public:
    Date();
    Date(int j, int m, int a);

    void affiche() const;
    bool checkDate(int j, int m, int a) const;

    void saisie();

    bool estEgal(const Date& d) const;
    bool estSuperieur(const Date& d) const;

    int getJour() const;
    int getMois() const;
    int getAnnee() const;
};

#endif
