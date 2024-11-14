#include <stdio.h>

int main() {
    // Declaração de variáveis
    int cod[5], temp[5], i = 0, con = 0, k = 0, j = 0;
    float sal[5], salbase, menor;

    // Solicita ao usuário para inserir os dados necessários
    printf("Digite os dados necessarios para fazermos seu relatorio:\n\n");

    // Loop para coletar dados de 5 funcionários
    for (i = 0; i < 5; i++) {
        printf("Codigo do funcionario (%d): ", i + 1);
        scanf("%d", &cod[i]);

        printf("Salario do funcionario (%d): ", i + 1);
        scanf("%f", &sal[i]);

        printf("Tempo em anos do funcionario (%d): ", i + 1);
        scanf("%d", &temp[i]);

        // Limpa a tela após a entrada de dados
        system("cls");
    }

    // Solicita o salário base para comparação
    printf("Digite o salario que sera a base do relatorio: ");
    scanf("%f", &salbase);

    // Limpa a tela
    system("cls");

    // Exibe a lista de funcionários com salário até o salário base
    printf("Segue lista de funcionario que possuem salario ate R$%0.2f :\n", salbase);

    // Verifica funcionários com salário menor ou igual ao salário base
    for (i = 0; i < 5; i++) {
        if (sal[i] <= salbase) {
            printf("Funcionario com codigo(%d), possui o salario: R$%0.2f\n", cod[i], sal[i]);
            con++; // Conta quantos funcionários têm salários menores ou iguais ao salário base
        }
    }

    // Exibe a lista de funcionários com salário maior que o salário base
    printf("\n\nSegue lista de funcionario que possuem salario maior que R$%0.2f :\n", salbase);

    // Verifica funcionários com salário maior que o salário base
    for (i = 0; i < 5; i++) {
        if (sal[i] > salbase) {
            printf("Funcionario com codigo(%d), possui o salario: R$%0.2f\n", cod[i], sal[i]);
            con++; // Conta quantos funcionários têm salários maiores que o salário base
        }
    }

    // Se nenhum funcionário foi encontrado, exibe uma mensagem de erro
    if (con == 0) {
        printf("\n\nNao foi encontrado os dados necessarios para construcao do relatorio, insira os dados corretos:\n");
    }

    // Inicializa a variável menor com o primeiro salário do vetor
    menor = sal[0];

    // Encontra o menor salário no vetor
    for (i = 0; i < 5; i++) {
        if (sal[i] < menor) {
            menor = sal[i];
        }
    }

    // Exibe o menor salário encontrado
    printf("\nSalario menor e: %0.2f\n", menor);

    // Conta quantos funcionários possuem o menor salário
    for (i = 0; i < 5; i++) {
        if (sal[i] == menor) {
            k++;
        }
    }

    // Exibe quantos funcionários possuem o menor salário
    printf("Possui %d trabalhador na empresa com este salario. \n\n", k);

    // Exibe os códigos dos funcionários que possuem o menor salário
    for (i = 0; i < 5; i++) {
        if (sal[i] == menor) {
            printf("Funcionario com codigo %d possui este salario.\n", cod[i]);
        }
    }

    printf("\n");

    // Verifica quais funcionários estão isentos de imposto (tempo de serviço entre 2 e 4 anos e salário menor que R$ 1500)
    for (i = 0; i < 5; i++) {
        if (temp[i] >= 2 && temp[i] <= 4 && sal[i] < 1500) {
            printf("Funcionario com codigo %d esta isento de imposto\n", cod[i]);
            j++; // Conta quantos funcionários estão isentos de imposto
        }
    }

    // Se nenhum funcionário está isento de imposto, exibe uma mensagem
    if (j == 0) {
        printf("\nTodos funcionarios precisam pagar imposto, nao existe nenhum isento.");
    }

    return 0;
}


