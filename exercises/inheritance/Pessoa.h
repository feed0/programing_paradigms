#ifndef PESSOA_H
#define PESSOA_H

#include <string>
using namespace std;

class Pessoa {
protected:
    string nome;
    string logradouro;
    string bairro;
    string cidade;
    string estado;
    string cep;
    string telefone;
    string email;

public:
    Pessoa(string nome, string logradouro, string bairro, string cidade, string estado, string cep, string telefone, string email);
};

#endif