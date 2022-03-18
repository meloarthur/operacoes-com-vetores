#include <stdio.h>
#include <stdlib.h>
#include <time.h> // Biblioteca que permite gerar números aleatórios diferentes ao executar o programa

// Função que ordena os números do vetor em ordem crescente
void ordena_crescente(int *vetor, size_t tamanho)
{
    int aux; // Variável que cria um novo vetor para não substituir os valores do vetor original

    for (int i = 0; i < tamanho; i++){
        for (int j = i+1; j < tamanho; j++){
            if (vetor[i] >= vetor[j]){
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
            
        }
    }

    for (int k = 0; k < tamanho; k++){
        printf("%d ", vetor[k]); // Imprime vetor em ordem crescente
    }
}

// Função que ordena os números do vetor em ordem decrescente
void ordena_decrescente(int *vetor, size_t tamanho)
{
    int aux; // Variável que cria um novo vetor para não substituir os valores do vetor original

    for (int i = 0; i < tamanho; i++){
        for (int j = i+1; j < tamanho; j++){
            if (vetor[i] <= vetor[j]){
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
            
        }
    }

    for (int k = 0; k < tamanho; k++){
        printf("%d ", vetor[k]); // Imprime vetor em ordem decrescente
    }
}

// Função que faz o somatório dos valores pares do vetor
void soma_pares(int *vetor, size_t tamanho)
{
    int soma=0;

    for (int i = 0; i < tamanho; i++){
        if (vetor[i] % 2 == 0)
            soma += vetor[i]; // Valores pares somados à variavel inicializada em 0
    }

    printf("Soma dos pares: %d", soma); // Imprime somatório
}

// Função que cria um novo vetor com os valores divididos pelo seu dobro
void faz_calculo(int *vetor, size_t tamanho)
{
    int aux[tamanho]; // Vetor no qual serão inseridos os novos valores, para não substituir o vetor original

    for (int i = 0; i < tamanho; i++){
        aux[i] = vetor[i] / (vetor[i] * 2);
    }

    for (int i = 0; i < tamanho; i++){
        printf("%d ", aux[i]); // Imprime vetor auxiliar
    }
}

void conta_par_impar(int *vetor, size_t tamanho)
{
    int par=0, impar=0;

    for (int i = 0; i < tamanho; i++){
        if (vetor[i] % 2 == 0)
            par++; // Contador de números pares
        else
            impar++; // Contador de números ímpares
    }

    printf("Quantidade de pares: %d\n", par);
    printf("Quantidade de ímpares: %d", impar);
}

void main()
{
    int numeros[15], op;
    int num_cresc[15], num_decresc[15];
    srand(time(NULL)); //gerando números aleatórios sempre que o código é executado

    //Preenche o vetor com 15 valores aleatórios de 0 a 100
    for (int i = 0; i < 15; i++){
        numeros[i] = rand() % 100;
    }

    // Laço de repetição para que o programa só encerre quando o usuário inserir 6
    while (op != 6){
        printf("Informe a instrução que deseja:\n");
        printf("[1] Números em forma crescente\n");
        printf("[2] Números em forma decrescente\n");
        printf("[3] Soma dos números pares\n");
        printf("[4] Dividir valores pelo seu dobro\n"); // numeros[i] = numeros[i] / (numeros[i] * 2)
        printf("[5] Quantidade de pares e ímpares\n");
        printf("[6] Sair\n");
        printf("Sua opção -> ");
        scanf("%d", &op);
        printf("\n");

        // Caso insira 1
        if (op == 1){
            ordena_crescente(numeros, 15);
            printf("\n\n--------------------\n");
        }

        // Caso insira 2
        else if (op == 2){
            ordena_decrescente(numeros, 15);
            printf("\n\n--------------------\n");
        }

        // Caso insira 3
        else if (op == 3){
            soma_pares(numeros, 15);
            printf("\n\n--------------------\n");
        }

        // Caso insira 4
        else if (op == 4){
            faz_calculo(numeros, 15);
            printf("\n\n--------------------\n");
        }

        // Caso insira 5
        else if (op == 5){
            conta_par_impar(numeros, 15);
            printf("\n\n--------------------\n");
        }

        // Caso o valor inserido não seja nenhuma das opções apresentadas
        else if (op < 1 || op > 6){
            printf("\nOpção inválida, tente novamente.");
            printf("\n\n--------------------\n");
        }
    }
}
