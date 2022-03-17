#include <stdio.h>
#include <stdlib.h>
#include <time.h> // Biblioteca que permite gerar números aleatórios diferentes ao executar o programa

void ordena_crescente(int *vetor, size_t tamanho)
{
    int aux;

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
        printf("%d ", vetor[k]);
    }
}

void ordena_decrescente(int *vetor, size_t tamanho)
{
    int aux;

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
        printf("%d ", vetor[k]);
    }
}

void main()
{
    int numeros[15], i, j, op;
    int num_cresc[15], num_decresc[15];
    srand(time(NULL)); //gerando números aleatórios sempre que o código é executado

    //Preenche o vetor com 15 valores aleatórios de 0 a 100
    for (i = 0; i < 15; i++){
        numeros[i] = rand() % 100;
    }

    while (op != 1){
        printf("Informe a instrução que deseja:\n");
        printf("[1] Sair\n");
        printf("[2] Números em forma crescente\n");
        printf("[3] Números em forma decrescente\n");
        printf("[4] Soma dos números pares\n");
        printf("[5] Vetor de 0,5\n"); // numeros[i] /= (numeros[i] * 2)
        printf("[6] Quantidade de pares e ímpares\n");
        printf("Sua opção -> ");
        scanf("%d", &op);

        if (op == 2){
            ordena_crescente(numeros, 15);
            printf("\n\n--------------------\n");
        }

        if (op == 3){
            ordena_decrescente(numeros, 15);
            printf("\n\n--------------------\n");
        }
    }


}
