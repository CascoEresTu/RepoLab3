#include "Racional.h"
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {

    int opcion = 0 ;
    std::cout << "REPOSICIÓN DE LABORATORIO # 3 " << std::endl;
    std::cout << "Hecho por Carlos Guillermo Casco Valle" << std::endl;
    Racional a , b , c ;

    while(opcion!= 9){
            std::cout << "///Calculadora con Fracciones Simples///" << std::endl;
            std::cout << "1) Suma de Fracciones" << std::endl;
            std::cout << "2) Resta de Fracciones" << std::endl;
            std::cout << "3) Multiplicación de Fracciones " << std::endl;
            std::cout << "4) División de Fracciones " << std::endl;
            std::cout << "5) Suma: Fracción y entero" << std::endl;
            std::cout << "6) Resta: Fracción y entero " << std::endl;
            std::cout << "7) Multiplicación: Fracción y entero " << std::endl;
            std::cout << "8) División: Fracción y entero " << std::endl;
            std::cout << "9) Salir" << std::endl;
            cin>> opcion;

            if (opcion == 1 ){
                int num1 , num2 , dem1 , dem2;
                cout << "Fraccion 1: " << std::endl;
                cout<<"Ingrese los valores respectivos del numerador"<<endl;
                cout <<"y denominador, separados por un espacio" << std::endl;
                cin>>num1;
                cin>>dem1;

                a.setNum(num1);
                a.setDem(dem1);
                std::cout << "La primera fracción es :" << std::endl;
                a.imprimir();
                std::cout << "Simplificando: " << std::endl;
                a.simplificar();
                a.imprimir();

                cout << "Fraccion 2: " << std::endl;
                cout<<"Ingrese los valores respectivos del numerador"<<endl;
                cout <<"y denominador, separados por un espacio" << std::endl;
                cin>>num2;
                cin>>dem2;

                b.setNum(num2);
                b.setDem(dem2);
                std::cout << "La segunda fracción es :" << std::endl;
                b.imprimir();
                std::cout << "Simplificando: " << std::endl;
                b.simplificar();
                b.imprimir();

                std::cout << "El resultado será: \n" << std::endl;
                c = a + b;

                a.imprimir();
                cout << "+";
                b.imprimir();
                std::cout << "----------" << std::endl;
                c.simplificar();
                c.imprimir();


            }

            if (opcion == 2 ) {
                int num1 , num2 , dem1 , dem2;
                cout << "Fraccion 1: " << std::endl;
                cout<<"Ingrese los valores respectivos del numerador"<<endl;
                cout <<"y denominador, separados por un espacio" << std::endl;
                cin>>num1;
                cin>>dem1;

                a.setNum(num1);
                a.setDem(dem1);
                std::cout << "La primera fracción es :" << std::endl;
                a.imprimir();
                std::cout << "Simplificando: " << std::endl;
                a.simplificar();
                a.imprimir();

                cout << "Fraccion 2: " << std::endl;
                cout<<"Ingrese los valores respectivos del numerador"<<endl;
                cout <<"y denominador, separados por un espacio" << std::endl;
                cin>>num2;
                cin>>dem2;

                b.setNum(num2);
                b.setDem(dem2);
                std::cout << "La segunda fracción es :" << std::endl;
                b.imprimir();
                std::cout << "Simplificando: " << std::endl;
                b.simplificar();
                b.imprimir();

                std::cout << "El resultado será: \n" << std::endl;
                c = a - b;

                a.imprimir();
                cout << "-";
                b.imprimir();
                std::cout << "----------" << std::endl;
                c.simplificar();
                c.imprimir();

            }

            if (opcion == 3 ) {
                    int num1 , num2 , dem1 , dem2;
                    cout << "Fraccion 1: " << std::endl;
                    cout<<"Ingrese los valores respectivos del numerador"<<endl;
                    cout <<"y denominador, separados por un espacio" << std::endl;
                    cin>>num1;
                    cin>>dem1;

                    a.setNum(num1);
                    a.setDem(dem1);
                    std::cout << "La primera fracción es :" << std::endl;
                    a.imprimir();
                    std::cout << "Simplificando: " << std::endl;
                    a.simplificar();
                    a.imprimir();

                    cout << "Fraccion 2: " << std::endl;
                    cout<<"Ingrese los valores respectivos del numerador"<<endl;
                    cout <<"y denominador, separados por un espacio" << std::endl;
                    cin>>num2;
                    cin>>dem2;

                    b.setNum(num2);
                    b.setDem(dem2);
                    std::cout << "La primera segunda es :" << std::endl;
                    b.imprimir();
                    std::cout << "Simplificando: " << std::endl;
                    b.simplificar();
                    b.imprimir();

                    std::cout << "El resultado será: \n" << std::endl;
                    c = a * b;

                    a.imprimir();
                    cout << "x";
                    b.imprimir();
                    std::cout << "----------" << std::endl;
                    c.simplificar();
                    c.imprimir();

            }

            if (opcion == 4 ) {
                int num1 , num2 , dem1 , dem2;
                cout << "Fraccion 1: " << std::endl;
                cout<<"Ingrese los valores respectivos del numerador"<<endl;
                cout <<"y denominador, separados por un espacio" << std::endl;
                cin>>num1;
                cin>>dem1;

                a.setNum(num1);
                a.setDem(dem1);
                std::cout << "La primera fracción es :" << std::endl;
                a.imprimir();
                std::cout << "Simplificando: " << std::endl;
                a.simplificar();
                a.imprimir();

                cout << "Fraccion 2: " << std::endl;
                cout<<"Ingrese los valores respectivos del numerador"<<endl;
                cout <<"y denominador, separados por un espacio" << std::endl;
                cin>>num2;
                cin>>dem2;

                b.setNum(num2);
                b.setDem(dem2);
                std::cout << "La segunda fracción es :" << std::endl;
                b.imprimir();
                std::cout << "Simplificando: " << std::endl;
                b.simplificar();
                b.imprimir();

                std::cout << "El resultado será: \n" << std::endl;
                c = a / b;

                a.imprimir();
                cout << "÷";
                b.imprimir();
                std::cout << "----------" << std::endl;
                c.simplificar();
                c.imprimir();
                /* code */
            }
            if (opcion == 5 ) {
                int num1 , num2 , dem2;
                cout << "Entero : " << std::endl;
                cout<<"Ingrese el valor de su entero: "<<endl;
                cin>>num1;
                a.setNum(num1);
                a.setDem(1);
                //a.imprimir();

                cout << "Fraccion : " << std::endl;
                cout<<"Ingrese los valores respectivos del numerador"<<endl;
                cout <<"y denominador, separados por un espacio" << std::endl;
                cin>>num2;
                cin>>dem2;

                b.setNum(num2);
                b.setDem(dem2);
                std::cout << "su fracción es :" << std::endl;
                b.imprimir();
                std::cout << "Simplificando: " << std::endl;
                b.simplificar();
                b.imprimir();


                std::cout << "El resultado será: \n" << std::endl;
                c = a + b;
                std::cout << num1 << std::endl;
                cout << "+";
                b.imprimir();
                std::cout << "----------" << std::endl;
                c.simplificar();
                c.imprimir();
            }
            if (opcion == 6 ) {
                int num1 , num2 , dem2;
                cout << "Entero : " << std::endl;
                cout<<"Ingrese el valor de su entero: "<<endl;
                cin>>num1;
                a.setNum(num1);
                a.setDem(1);
                //a.imprimir();

                cout << "Fraccion : " << std::endl;
                cout<<"Ingrese los valores respectivos del numerador"<<endl;
                cout <<"y denominador, separados por un espacio" << std::endl;
                cin>>num2;
                cin>>dem2;

                b.setNum(num2);
                b.setDem(dem2);
                std::cout << "su fracción es :" << std::endl;
                b.imprimir();
                std::cout << "Simplificando: " << std::endl;
                b.simplificar();
                b.imprimir();


                std::cout << "El resultado será: \n" << std::endl;
                c = a - b;
                std::cout << num1 << std::endl;
                cout << "-";
                b.imprimir();
                std::cout << "----------" << std::endl;
                c.simplificar();
                c.imprimir();



            }
            if (opcion == 7 ) {
                int num1 , num2 , dem2;
                cout << "Entero : " << std::endl;
                cout<<"Ingrese el valor de su entero: "<<endl;
                cin>>num1;
                a.setNum(num1);
                a.setDem(1);
                //a.imprimir();

                cout << "Fraccion : " << std::endl;
                cout<<"Ingrese los valores respectivos del numerador"<<endl;
                cout <<"y denominador, separados por un espacio" << std::endl;
                cin>>num2;
                cin>>dem2;

                b.setNum(num2);
                b.setDem(dem2);
                std::cout << "su fracción es :" << std::endl;
                b.imprimir();
                std::cout << "Simplificando: " << std::endl;
                b.simplificar();
                b.imprimir();


                std::cout << "El resultado será: \n" << std::endl;
                c = a * b;
                std::cout << num1 << std::endl;
                cout << "x";
                b.imprimir();
                std::cout << "----------" << std::endl;
                c.simplificar();
                c.imprimir();
            }

            if (opcion == 8 ) {
                int num1 , num2 , dem2;
                cout << "Entero : " << std::endl;
                cout<<"Ingrese el valor de su entero: "<<endl;
                cin>>num1;
                a.setNum(num1);
                a.setDem(1);
                //a.imprimir();

                cout << "Fraccion : " << std::endl;
                cout<<"Ingrese los valores respectivos del numerador"<<endl;
                cout <<"y denominador, separados por un espacio" << std::endl;
                cin>>num2;
                cin>>dem2;

                b.setNum(num2);
                b.setDem(dem2);
                std::cout << "su fracción es :" << std::endl;
                b.imprimir();
                std::cout << "Simplificando: " << std::endl;
                b.simplificar();
                b.imprimir();

                std::cout << "El resultado será: \n" << std::endl;
                c = a / b;
                std::cout << num1 << std::endl;
                cout << "÷";
                b.imprimir();
                std::cout << "----------" << std::endl;
                c.simplificar();
                c.imprimir();
            }
            std::cout << "ADIOS C:" << std::endl;


        }

    return 0;
}
