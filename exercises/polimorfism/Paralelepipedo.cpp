#include "Paralelepipedo.h"
#include <iostream>
#include <cmath>
using namespace std;

Paralelepipedo::Paralelepipedo(string nome, float base, float altura, float comprimento)
    : Figura(nome, base, altura, comprimento) {}

void Paralelepipedo::display(){
    cout<<"nome: "<<nome<<endl;
    cout<<"base: "<<getDim1()<<endl;
    cout<<"altura: "<<getDim2()<<endl;
    cout<<"comprimento: "<<getDim3()<<endl;
    cout<<"area: "<<Paralelepipedo::getArea()<<endl;
    cout<<"volume: "<<Paralelepipedo::getVolume()<<endl;
}

float Paralelepipedo::getArea() const{
    return 2.0f*(getDim1()*getDim2() + getDim1()*getDim3() + getDim2()*getDim3());
}
float Paralelepipedo::getVolume() const{
    return getDim1()*getDim2()*getDim3();
}