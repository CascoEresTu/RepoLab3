#include "Racional.h"

Racional::Racional(){

}

Racional::Racional(int pNum, int pDen){
    this->numerador = pNum;
    this->denominador= pDen;

}

Racional::~Racional(){
    std::cout << "adios Racional :c" << std::endl;
}

void Racional::imprimir(){

        std::cout <<"(" << this->numerador <<"/ "<< this->denominador <<")" <<std::endl;
}

void Racional::simplificar( ){

    for (int i = this->denominador * this->numerador; i > 1; i--) {
               if ((this->denominador % i == 0) && (this->numerador % i == 0)) {
                this->setDem(this->denominador /= i);
               this->setNum(this->numerador /= i);
                }
            }

}

int Racional::getNum(){
    return this->numerador;
}

void Racional::setNum(int num){
    this->numerador = num;
}

int Racional::getDem(){
    return this->denominador;
}

void Racional::setDem(int num){
     this->denominador = num;
}


Racional& Racional::operator+(Racional& fraccion){

         int numerador = this->numerador * fraccion.getDem() + fraccion.getNum() * this->denominador;
         int denominador = this->denominador * fraccion.getDem();
//         std::cout << numerador << std::endl;

         return *(new Racional(numerador,denominador));

}

Racional& Racional::operator-(Racional& fraccion){

    int numerador = this->numerador * fraccion.getDem() - fraccion.getNum() * this->denominador;
    int denominador = this->denominador * fraccion.getDem();
    //std::cout << numerador << std::endl;
    return *(new Racional(numerador,denominador));


}

Racional& Racional::operator*(Racional& fraccion){

    int numerador = this->numerador * fraccion.getNum();
    int denominador = this->denominador * fraccion.getDem();
//    std::cout << numerador << std::endl;
    return *(new Racional(numerador,denominador));

}

Racional& Racional::operator/(Racional& fraccion){

    int numerador = this->numerador * fraccion.getDem();
    int denominador = this->denominador * fraccion.getNum();
//    std::cout << numerador << std::endl;
    return *(new Racional(numerador,denominador));

}
