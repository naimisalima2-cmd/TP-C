#ifndef POINT_H
#define POINT_H

class Point {
private:
    double x, y, z;
    static int compteur;

public:
    Point();                      
    Point(const Point &p);
    Point(double a, double b, double c); 
    ~Point();  

    double getX() const;
    double getY() const;
    double getZ() const;

    void setX(double x);
    void setY(double y);
    void setZ(double z);

    void saisir();
    void afficher() const;
    void translater(double dx, double dy, double dz);
    double distance(const Point &P) const;

    static int getCompteur();
};

#endif
