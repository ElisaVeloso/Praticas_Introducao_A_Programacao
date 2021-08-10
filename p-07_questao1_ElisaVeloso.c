//Elisa Alves Veloso
//20.2.4006 
//Turma 31

#include <stdio.h>

#define TAM_MAX 10

int main(){
  int fibonacci[TAM_MAX]; //= {1,1,2,3,5,8,13,21,34,55};
    fibonacci[0] = 1;
    fibonacci[1] = 1;

    for (int i = 2; i < TAM_MAX; i++) {
    fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
    }

    for (int i = 0; i < TAM_MAX; i++){
      printf("%d ", fibonacci[i]);
    }
  return 0;
}