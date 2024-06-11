#ifndef ESFERA_H
#define ESFERA_H

#include "Figura.h"

class Esfera : public Figura {
    public:
        Esfera(std::string nome, float raio);

        void display() override;
        float getArea() const override;
        float getVolume() const override;
    };

#endif // ESFERA_H