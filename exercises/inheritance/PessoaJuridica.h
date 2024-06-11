#ifndef PESSOAJURIDICA_H
#define PESSOAJURIDICA_H

#include "Pessoa.h"

class PessoaJuridica : public Pessoa {
private:
    string inscricaoEstadual;
    string cnpj;

public:
    PessoaJuridica(string nome, string logradouro, string bairro, string cidade, string estado, string cep, string telefone, string email, string inscricaoEstadual, string cnpj);
};

#endif