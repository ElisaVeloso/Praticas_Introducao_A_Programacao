// Elisa Alves Veloso
// 20.2.4006
// Turma 31

#include <stdio.h>

int main() {
  int num1, num2, num3;
  int maior, intermediario, menor;
  printf("Digite tres numeros inteiros:\n");

  scanf("%d", &num1);
  scanf("%d", &num2);
  scanf("%d", &num3);

  // caso num1 for o maior de todos
  if ((num1 > num2) && (num1 > num3)) {
    maior = num1;

    if (num2 > num3)
    {
      menor = num3;
      intermediario = num2;
    }

    else if (num3 > num2)
    {
      menor = num2;
      intermediario = num3;
    }
  }

  // caso num2 for o maior de todos
  if ((num2 > num1) && (num2 > num3)) {
    maior = num2;

    if (num1 > num3)
    {
      menor = num3;
      intermediario = num1;
    }

    else if (num3 > num1)
    {
      menor = num1;
      intermediario = num3;
    }
  }

  // caso num3 for o maior de todos
  if ((num3 > num1) && (num3 > num2)) {
    maior = num3;

    if (num1 > num2)
    {
      menor = num2;
      intermediario = num1;
    }

    else if (num2 > num1)
    {
      menor = num1;
      intermediario = num2;
    }
  }

  // imprimir na tela os valores menor, intermediario e maior
  printf("Menor: %d\nIntermediario: %d\nMaior: %d", menor, intermediario, maior);

  return 0;
}