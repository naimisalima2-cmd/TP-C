#ifndef HEURE_H
#define HEURE_H

class Heure {
private:
    int heures, minutes;
    bool checkHeure(int h, int m);

public:
    Heure(int h = 0, int m = 0);

    int getHeures() const;
    int getMinutes() const;

    void setHeures(int h);
    void setMinutes(int m);

    void affiche() const;
};

#endif
