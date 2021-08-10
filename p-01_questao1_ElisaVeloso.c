//Elisa Alves Veloso 
//20.2.4006
//Turma 31

#include <stdio.h>
#include <math.h> 

int main() {
  float a, b, c, d;
  
    printf("Digite os valores de a, b, c, d:\n");
      scanf("%f", &a);
      scanf("%f", &b);
      scanf("%f", &c);
      scanf("%f", &d);

  float x;
    x = pow(a, 3) * ((b + c) / d); 

  printf("a = %f, b = %f, c = %f, d = %f\n", a, b, c, d);
  printf("x = %.2f\n", x);

  return 0;
}