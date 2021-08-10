//Elisa Alves Veloso
//20.2.4006
//Turma 31

#include <stdio.h>

int ehPrimo(int n); 

int main (){
  int n;
  printf("Digite um numero:\n");
  scanf("%d", &n);

  int ehPrimoVar = ehPrimo(n);

  if (ehPrimoVar == 1){
    printf("%d eh um numero primo\n", n);
  }
  else {
    printf("%d NAO eh um numero primo\n", n);
  }

  return 0;
}

int ehPrimo(int n){
  int i = 2;

  while (i<=n){
    if ((n%i) == 0){
      i++;
      return 0;
    }
    else {
      return 1;
    }
  }
}