//Elisa Alves Veloso
//20.2.4006
//Turma 31

#include <stdio.h>

struct Racional{
 int numerador;
 int denominador;
};

int equal (struct Racional *r1, struct Racional *r2);

int main(){
  struct Racional r1;
  struct Racional r2;

  printf("Digite numerador e denominador de r1: ");
  scanf("%d %d", &r1.numerador, &r1.denominador);

  printf("Digite numerador e denominador de r2: ");
  scanf("%d %d", &r2.numerador, &r2.denominador);
  printf("\n");

  int equalVar = equal(&r1, &r2);

  if (equalVar) {
    printf("r1 e r2 sao iguais!\n");
  } else {
    printf("r1 e r2 sao diferentes!\n");
  }

  return 0;
}

int equal (struct Racional *r1, struct Racional *r2){
  double result1, result2;
  result1 = (r1->numerador / r1->denominador);
  result2 = (r2->numerador / r2->denominador);

  if (result1 == result2){
    return 1;
  } else return 0;
}