#include <stdio.h>
#include <stdlib.h>
#define N 8

//Cabeçalho para criar o protótipo

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

//Função
void shellsort(int *dados){
    //Criação das variáveis
    int i, j, h, aux;
    h = 1;//Iniciar h com 1
    // criação de um laço para inicializar o h com base no conjunto de dados
    //Esse laço vai possibilitar a inicialização da variável h.
    while(h < N){
        h = 3 * h + 1;
    }
    while(h > 1){//Laço principal do algoritimo
        h /= 3;
        //criação de um laço interno para realizar as comparações
        for(i = h; i < N;i ++){
            aux = dados [i];
            j = i - h;
            //Esse laço permite realizar as trcas enquanto j for maior ou igual a 0
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
