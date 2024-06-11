#ifndef CONE_H
#define CONE_H

#include "Figura.h"

class Cone : public Figura {
    public:
        Cone(std::string nome, float base, float altura);
        void display() override;

        float getArea() const override;
        float getVolume() const override;
    };

#endif