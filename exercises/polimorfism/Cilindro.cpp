#include "Cilindro.h"
#include <iostream>
#include <cmath>
using namespace std;

Cilindro::Cilindro(string nome, float base, float altura)
    : Figura(nome, base, altura) {}


void Cilindro::display(){
    cout<<"nome: "<<nome<<endl;
    cout<<"raio: "<<getDim1()<<endl;
    cout<<"altura: "<<getDim2()<<endl;
    cout<<"area: "<<Cilindro::getArea()<<endl;
    cout<<"volume: "<<Cilindro::getVolume()<<endl;
}

float Cilindro::getArea() const{
    float area_l = 2.0f*M_PI*getDim1()*getDim2();
    float area_b = 2.0f*M_PI*getDim1()*getDim1();
    return area_l+area_b;
}
float Cilindro::getVolume() const{
    return M_PI*getDim1()*getDim1()*getDim2();
}