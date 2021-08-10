//Elisa Alves Veloso
//20.2.4006 
//Turma 31

#include <stdio.h>

#define TAM_MAX 30

void calcMedia(double [], double soma);

int main(){
  double temperatura[TAM_MAX], soma = 0;

  for(int i = 0; i < TAM_MAX; i++) {
    printf("Digite a temperatura do dia %d: ", i+1);
    scanf("%lf", &temperatura[i]);
    soma += temperatura[i];
  }

  calcMedia(temperatura, soma);

  return 0;
}

void calcMedia(double temperatura[TAM_MAX], double soma) {
  double media = soma / TAM_MAX;

  int acimaDaMedia = 0, abaixoDaMedia = 0;
  for(int i = 0; i < TAM_MAX; i++){
    if (temperatura[i] > media) {
      acimaDaMedia++;
    }
    if (temperatura[i] < media) {
      abaixoDaMedia++;
    }
  }
  
  printf("%d dias tiveram temperatura acima da media e %d dias tiveram temperatura abaixo da media", acimaDaMedia, abaixoDaMedia);
}