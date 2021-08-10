//Elisa Alves Veloso
//20.2.4006
//Turma 31
#include <stdio.h>

int main() {
  int x, y;

  printf("Digite os valores de x e y: \n");
  scanf("%d%d", &x, &y);

  while ((x % 2 != 0) || (y % 2 != 0)) {
    printf("Apenas numeros pares sao aceitos.\n\n");

    printf("Digite os valores de x e y: \n");
    scanf("%d%d", &x, &y);
  }
  while (x  > y ) {
    printf("Erro: x deve ser menor que y.\n\n");

    printf("Digite os valores de x e y: \n");
    scanf("%d%d", &x, &y);
  }

  int i,j;
  int aux = 0;
  int cont = 0;
  int auxY = y;
  i = 0;
  j = 0;
  while (i < y) {
    while (j < x) {
      aux = (y - x) / 2;
      if (x < auxY) {
      while (cont < aux) {
        printf(" ");

        cont++;
      }
      printf("*");
    }
      j++;
    }
    if (x < (auxY - 1)) {
      printf("\n");
    }
    i++;
    j = 0;
    x = x + 2;
    cont = 0;
  }
}