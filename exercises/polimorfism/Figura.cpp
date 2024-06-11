#include "Figura.h"

Figura::Figura(std::string nome, float dim1)
    : nome(nome), dim1(dim1) {}
Figura::Figura(std::string nome, float dim1, float dim2)
    : nome(nome), dim1(dim1), dim2(dim2) {}
Figura::Figura(std::string nome, float dim1, float dim2, float dim3)
    : nome(nome), dim1(dim1), dim2(dim2), dim3(dim3) {}

Figura::~Figura() {}

std::string Figura::getNome() const {return nome;}
float Figura::getDim1() const {return dim1;}
float Figura::getDim2() const {return dim2;}
float Figura::getDim3() const {return dim3;}

void Figura::setNome(const std::string& novoNome) {nome = novoNome;}
void Figura::setDim1(float novoDim1) {dim1 = novoDim1;}
void Figura::setDim2(float novoDim2) {dim2 = novoDim2;}
void Figura::setDim3(float novoDim3) {dim3 = novoDim3;}

void Figura::aumentar(float percentage) {
    // o % na questão interpretei como se fosse de 0 a 100
    float adjusted = percentage/100.0f; // qualquer coisa só comentar essa linha

    setDim1(getDim1()*adjusted);
    setDim2(getDim2()*adjusted);
    setDim3(getDim3()*adjusted);
}