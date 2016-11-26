#include <iostream>
#include <cmath>
using namespace std;

class Racional{
private:
        int numerador;
        int denominador
public:
        Racional();
        Racional(int, int);
        ~Racional();
        void imprimir();
        double operator+(Racional&);
        double operator-(Racional&);
        double operator*(Racional&);
        double operator/(Racional&);
};
