#include <iostream>
#include <string>
#pragma once


class Banco
{
private:
    std::string nome_titular;
    int numero_conta;
    float saldo = 0;
    int cpf;

public:
    void depositar(float valorADeposito);
    void sacar(float valorASacar);
    float recuperarSaldo();
    void definir_nome(std::string nome);

};


