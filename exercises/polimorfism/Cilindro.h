#ifndef CILINDRO_H
#define CILINDRO_H

#include "Figura.h"

class Cilindro : public Figura {
    public:
        Cilindro(std::string nome, float base, float altura);
        void display() override;

        float getArea() const override;
        float getVolume() const override;
    };

#endif