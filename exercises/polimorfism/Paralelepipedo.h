#ifndef PARALELEPIPEDO_H
#define PARALELEPIPEDO_H

#include "Figura.h"

class Paralelepipedo : public Figura {
    public:
        Paralelepipedo(std::string nome, float base, float altura, float comprimento);
        void display() override;

        float getArea() const override;
        float getVolume() const override;
    };

#endif