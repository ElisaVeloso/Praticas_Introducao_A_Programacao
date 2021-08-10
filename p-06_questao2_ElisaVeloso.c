//Elisa Alves Veloso
//20.2.4006
//Turma 31

#include <stdio.h>

int validaCPF(long long int CPF);

int main(){
  long long int CPF;
  scanf("%lld", &CPF);

  int validaCPFVar = validaCPF(CPF);

  if (validaCPFVar == 1){
    printf("CPF valido\n");
  } else {
    printf("CPF invalido\n");
  }

  return 0;
}

int validaCPF(long long int CPF) {
  long long int rest1 = 0, rest2 = 0, aux = 10000000000;
  int auxCPF, aux2, aux3, c10, c11;

  for (int i = 0; i < 11; i++) {
    auxCPF = CPF / aux;
    CPF -= (auxCPF * aux);
    aux = (aux / 10);

    if (i < 9) {
        rest1 += (auxCPF * (10 - i));
        rest2 += (auxCPF * (11 - i));
    } else if (i == 9) {
        c10 = auxCPF;
    } else if (i == 10) {
        c11 = auxCPF;
    }
  }

  aux2 = (rest1 * 10) % 11;
  rest2 += (aux2 * 2);
  aux3 = (rest2 * 10) % 11;

  if (aux2 == c10 && aux3 == c11) {
    return 1;
  } else {
    return 0;
  }
}