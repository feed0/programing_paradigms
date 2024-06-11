#include "Esfera.h"
#include <iostream>
#include <cmath>

using namespace std;

Esfera::Esfera(std::string nome, float raio)
    : Figura(nome, raio) {}

void Esfera::display() {
    cout<<"nome: "<<getNome()<<endl;
    cout<<"raio: "<<getDim1()<<endl;
    cout<<"area: "<<getArea()<<endl;
    cout<<"volume: "<<getVolume()<<endl;
}

float Esfera::getArea() const {
    return 4.0f*M_PI*getDim1()*getDim1();
}

float Esfera::getVolume() const {
    return (4.0f/3.0f)*M_PI*getDim1()*getDim1()*getDim1();