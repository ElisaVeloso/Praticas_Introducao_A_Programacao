//Elisa Alves Veloso 
//20.2.4006
//Turma 31

#include <stdio.h>
#include <math.h>

int main() {
  float x1, x2, x3;
    printf("Digite os valores de x1, x2 e x3:\n");
    scanf("%f", &x1);
    scanf("%f", &x2);
    scanf("%f", &x3);

  float y;
    y = pow((x1 + pow(x2, 2) + pow(x3, 2)), 2) - pow((x1 * x2 * x3), 2);

  printf("y resulta em %.2f", y);

  return 0;
}