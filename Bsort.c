/*Implementar o algoritmo Bubble Sort em MIPS para ordenar um vetor de 10 posições. 
O usuário deve ser capaz de digitar os valores do vetor. O vetor ordenado deve ser exibido.*/

#include<stdio.h>

int main(){
    int vetor[10], memoria, troca, i, j;

    troca = 1;/*A variável "troca" será a verificação da troca em cada passada*/

    for(i = 0; i < 10; i++){
        printf("Digite o valor da posicao no vetor: ");
        scanf("%d", &vetor[i]);
    }

    for(j = 9; ((j >= 1) && (troca == 1)); j--){
		troca = 0; /*Se o valor continuar 0 na próxima passada quer dizer que não houve troca e a função é encerrada.*/
		for(i = 0; i < j; i++){
            if(vetor[i] > vetor[i + 1]){
                memoria = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = memoria;
                troca = 1;/*Se houve troca, "troca" recebe 1 para continuar rodando.*/
            }
		}
    }

    for(i = 0; i < 10; i++){
        printf("%d ", vetor[i]);
    }
    return 0;
}

