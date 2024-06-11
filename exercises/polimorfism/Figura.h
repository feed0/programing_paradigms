#ifndef FIGURA_H
#define FIGURA_H

#include <string>

class Figura {
protected:
    std::string nome;
    float dim1;
    float dim2;
    float dim3;

public:
    Figura(std::string nome, float dim1);
    Figura(std::string nome, float dim1, float dim2);
    Figura(std::string nome, float dim1, float dim2, float dim3);
    virtual ~Figura();

    virtual void display() = 0;
    virtual float getArea() const = 0;
    virtual float getVolume() const = 0;

    std::string getNome() const;
    float getDim1() const;
    float getDim2() const;
    float getDim3() const;

    void setNome(const std::string& novoNome);
    void setDim1(float novoDim1);
    void setDim2(float novoDim1);
    void setDim3(float novoDim1);

    void aumentar(float percentage);
};

#endif // FIGURA_H