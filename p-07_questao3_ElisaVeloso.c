//Elisa Alves Veloso
//20.2.4006 
//Turma 31

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM_MAX 500

void imprimeFrequencia(int [], int, int);

int main(){
    int n, aleatorios, A[TAM_MAX];
    srand(time(NULL));


    do {
    printf("Digite um numero de 1 a 500: \n");
    scanf("%d", &n);
      if (n < 0 || n > 500){
        printf("Valor invalido\n");
      }
    } while(n < 0 || n > 500);


  imprimeFrequencia(A, aleatorios, n);

  return 0;
}

void imprimeFrequencia(int A[], int aleatorios, int n){
    for (int i = 0; i < n; i++){
      A[i] = 0;
    }
  for (int i = 0; i < 100000; i++){
    aleatorios = (rand() % n + 1);

    A[aleatorios - 1]++;
  } 

  for(int i = 0; i < n; i++){
    printf("o numero %d foi gerado %d vezes.\n", i+1, A[i]);
  }
}