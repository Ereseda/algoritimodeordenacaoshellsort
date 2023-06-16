#include <stdio.h>
#include <stdlib.h>
#define N 8

//Cabe�alho para criar o prot�tipo

void shellsort(int *dados);

int main(int argc, char** argv){
    int vetor[N], i;
    for( i = 0; i < N; i ++){
        printf("Informe um valor: \n");
        scanf("%d", &vetor[i]);
    }
    shellsort(vetor);

    for( i = 0; i < N; i ++){
        printf("%d ", vetor[i]);
    }
    return 0;
}

//Fun��o
void shellsort(int *dados){
    //Cria��o das vari�veis
    int i, j, h, aux;
    h = 1;//Iniciar h com 1
    // cria��o de um la�o para inicializar o h com base no conjunto de dados
    //Esse la�o vai possibilitar a inicializa��o da vari�vel h.
    while(h < N){
        h = 3 * h + 1;
    }
    while(h > 1){//La�o principal do algoritimo
        h /= 3;
        //cria��o de um la�o interno para realizar as compara��es
        for(i = h; i < N;i ++){
            aux = dados [i];
            j = i - h;
            //Esse la�o permite realizar as trcas enquanto j for maior ou igual a 0
            while(j >= 0 && aux < dados[j]){
                dados [j + h] = dados [j];
                j -= h;
            }
            dados[j + h] = aux;
        }
    }

}

//FONTE
//https://www.youtube.com/watch?v=10_rkC2YnVk
