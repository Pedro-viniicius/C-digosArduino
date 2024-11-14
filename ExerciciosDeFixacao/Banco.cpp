#include <iostream>
#include "Banco.hpp"
#include <string>


void Banco::depositar(float valorADeposito)
{
        if (valorADeposito > 0 ){
            saldo = saldo = valorADeposito;
            std::cout << "Valor depositado com sucesso." << std::endl;
        } else {
            std::cout << "Esse valor nao e possivel de depositar, digite outro valor!" << std::endl;
        }
}

void Banco::sacar(float valorASacar){

    bool controle = true; 
    std::cin >> valorASacar;

    while(controle){ 
        
        if(saldo > valorASacar){
        saldo = saldo - valorASacar;
        controle = false;
        std::cout <<"Valor sacado com sucesso." << std::endl;

        } else {
        std::cout << "Voce nao tem saldo o suficiente."<< std::endl;
        }
    }
}

float Banco::recuperarSaldo(){
    return saldo;
}

void Banco::definir_nome(std::string nome){
    std::cin >> nome;
    std::cout << "Nome definido com sucesso!" << std::endl;
}