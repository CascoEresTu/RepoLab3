#include <iostream>
#include <cmath>
using namespace std;

class Racional{
private:
        int numerador;
        int denominador;
public:
        Racional();
        Racional(int, int);
        ~Racional();
        int getNum();
        void setNum(int);
        int getDem();
        void setDem(int);
        void imprimir();
        void simplificar();
        Racional& operator+(Racional&);
        Racional& operator-(Racional&);
        Racional& operator*(Racional&);
        Racional& operator/(Racional&) ;
};
