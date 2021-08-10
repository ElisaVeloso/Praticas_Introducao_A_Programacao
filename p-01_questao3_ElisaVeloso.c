//Elisa Alves Veloso 
//20.2.4006
//Turma 31

#include <stdio.h>
#include <math.h>

int main() {
  float c;
    printf("Qual a temperatura em Celsius a ser convertida?\n");
    scanf("%f", &c);
  
  float f;
    f = (c * 9 / 5) + 32;

  float k;
    k = c + 273.15;

  printf("%.2f Celsius equivalem a %.2f Fahrenheit e a %.2f Kelvin.\n", c, f, k);

  return 0;
}