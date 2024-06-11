#include "Cone.h"
#include <iostream>
#include <cmath>
using namespace std;

Cone::Cone(std::string nome, float base, float altura)
    : Figura(nome, base, altura) {}

void Cone::display(){
    cout<<"nome: "<<nome<<endl;
    cout<<"raio: "<<getDim1()<<endl;
    cout<<"altura: "<<getDim2()<<endl;
    cout<<"area: "<<Cone::getArea()<<endl;
    cout<<"volume: "<<Cone::getVolume()<<endl;
}

float Cone::getArea() const{
    float slant_h = sqrt(getDim1()*getDim1() + getDim2()*getDim2());
    float area_l = M_PI*getDim1()*slant_h;
    float area_b = M_PI*getDim1()*getDim1();
    return area_l+area_b;
}
float Cone::getVolume() const{
    return (1.0f/3.0f)*M_PI*getDim1()*getDim1()*getDim2();
}