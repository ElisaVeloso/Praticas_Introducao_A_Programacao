// Elisa Alves Veloso
// 20.2.4006
// Turma 31

#include <stdio.h>
#include <math.h>

int main() {
  double pi, s = 1;
  int nTermos;
  printf("Digite o numero de termos:\n");
  scanf("%d", &nTermos);
  
  int i = 3;
  int cont = 1;
  while (cont <= nTermos) {
    s = s - (1.0 / pow(i, 3));
    s = s + (1.0 / pow((i + 2), 3));
    i = i + 4;
    cont++;
  }
  pi = cbrt(s * 32);

  printf("%lf", pi);
}