#ifndef PESSOAFISICA_H
#define PESSOAFISICA_H

#include "Pessoa.h"

class PessoaFisica : public Pessoa {
private:
    string rg;
    string cpf;

public:
    PessoaFisica(string nome, string logradouro, string bairro, string cidade, string estado, string cep, string telefone, string email, string rg, string cpf);
};

#endif