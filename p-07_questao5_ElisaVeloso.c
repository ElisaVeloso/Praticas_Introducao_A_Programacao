//Elisa Alves Veloso
//20.2.4006
//Turma 31
#include <stdio.h>

#define N 15

int main() {
  float nota1[N], nota2[N];

  for (int i = 0; i < 15; i++){
    printf("Nota 1: ");
    scanf("%f", &nota1[i]);

    printf("Nota 2: ");
    scanf("%f", &nota2[i]);
  }

  for (int i = 0; i < 15; i++){
    float media = (nota1[i] + nota2[i]) / 2.0;

    if (media >= 60){
      printf("Aluno %d foi aprovado\n", i+1);
    }
    else {
      printf("Aluno %d foi reprovado\n", i+1);
    }
  }
  return 0;
}