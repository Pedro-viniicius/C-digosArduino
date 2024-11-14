#include <stdio.h>
#include <string.h>

#define MAX 5

// Definição da estrutura da Fila Circular para inteiros
typedef struct {
    int itens[MAX];
    int inicio;
    int fim;
    int quantidade; // Para rastrear o número de elementos
} FilaCircular;

// Definição da estrutura da Fila Circular para strings (pacientes)
typedef struct {
    char itens[MAX][50]; // Cada item é uma string de até 50 caracteres
    int inicio;
    int fim;
    int quantidade;
} FilaCircularChar;

// Função para inicializar a fila de inteiros
void inicializarFila(FilaCircular* fila) {
    fila->inicio = -1;
    fila->fim = -1;
    fila->quantidade = 0;
}

// Função para inicializar a fila de strings (pacientes)
void inicializarFilaChar(FilaCircularChar* fila) {
    fila->inicio = -1;
    fila->fim = -1;
    fila->quantidade = 0;
}

// Função para verificar se a fila de strings está cheia
int estaCheiaChar(FilaCircularChar* fila) {
    return fila->quantidade == MAX;
}

// Função para verificar se a fila de strings está vazia
int estaVaziaChar(FilaCircularChar* fila) {
    return fila->quantidade == 0;
}

// Função para enfileirar um nome de paciente (string) na fila
void enfileirarChar(FilaCircularChar* fila, char valor[50]) {
    if (estaCheiaChar(fila)) {
        printf("Fila cheia!\n");
        return;
    }

    // Verifica se é a primeira inserção
    if (fila->inicio == -1) {
        fila->inicio = 0;  // Define o início
    }

    // Atualiza o índice do fim de forma circular
    fila->fim = (fila->fim + 1) % MAX;
    
    // Copia a string valor para a posição 'fim' na fila
    strcpy(fila->itens[fila->fim], valor);

    // Incrementa a quantidade de elementos na fila
    fila->quantidade++;
    printf("'%s' enfileirado com sucesso.\n", valor);
}

// Função para remover um paciente da fila (desenfileirar)
void chamarPaciente(FilaCircularChar* fila) {
    if (estaVaziaChar(fila)) {
        printf("Fila vazia!\n");
        return;
    }

    printf("Chamando o paciente: %s\n", fila->itens[fila->inicio]);
    fila->inicio = (fila->inicio + 1) % MAX;  // Movimento circular do índice
    fila->quantidade--;

    // Se a fila estiver vazia, reinicializa os índices
    if (estaVaziaChar(fila)) {
        fila->inicio = -1;
        fila->fim = -1;
    }
}

// Função para exibir os pacientes na fila
void exibirFila(FilaCircularChar* fila) {
    if (estaVaziaChar(fila)) {
        printf("A fila está vazia.\n");
        return;
    }

    printf("Pacientes na fila:\n");
    int i = fila->inicio;
    for (int count = 0; count < fila->quantidade; count++) {
        printf("%s\n", fila->itens[i]);
        i = (i + 1) % MAX;  // Movimento circular do índice
    }
}

// Função para adicionar paciente à fila
void adicionarPaciente(FilaCircularChar* fila, char nome[50]){
    if (estaCheiaChar(fila)){
        printf("Fila cheia, volte mais tarde!\n");
    }
    else {
        enfileirarChar(fila, nome);
    }
}

// Função principal para testar o menu da Fila Circular
int main() {
    FilaCircularChar fila;
    inicializarFilaChar(&fila);

    int opcao;
    char nomePaciente[50];

    do {
        printf("\n=== MENU ===\n");
        printf("1. Adicionar paciente\n");
        printf("2. Chamar paciente para atendimento\n");
        printf("3. Exibir fila de pacientes\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        getchar(); // Consumir o \n pendente

        switch (opcao) {
            case 1:
                printf("Digite o nome do paciente: ");
                fgets(nomePaciente, sizeof(nomePaciente), stdin);
                nomePaciente[strcspn(nomePaciente, "\n")] = '\0'; // Remover o \n
                adicionarPaciente(&fila, nomePaciente);
                break;

            case 2: 
                chamarPaciente(&fila); 
                break;

            case 3:
                exibirFila(&fila);
                break;

            case 0:
                printf("Saindo...\n");
                break;

            default:
                printf("Opção inválida! Tente novamente.\n");
        }

    } while (opcao != 0);

    return 0;
}
