//Elisa Alves Veloso
//20.2.4006
//Turma 31
#include <stdio.h>
#include <string.h>

int main() {
  char nome[70], sobrenome[20];
  int i, cont = 0, contEspaco = 0;
  printf("digite seu nome completo: ");
  fgets(nome, 70, stdin);

  for (i = strlen(nome) - 1; i >= 0; i--) {
    if(nome[i] == ' ') {
      break;
    }
  }

  for (int j = 0; j <= i; j++){
    if(nome[j] == ' ') {
      contEspaco++;
    }
  }

  for(int k = i + 1; k < strlen(nome) - 1; k++) {
    sobrenome[cont] = nome[k];
    cont++;
  }
  

  printf("%s, ", sobrenome);
  for(int j = 0; j < i; j++){
    printf("%c", nome[j]);
  }

  printf("\nTotal de letras: %d", (strlen(nome) - 1) - contEspaco);
  printf("\nTotal de letras do ultimo sobrenome: %d\n", cont);

  return 0;
}
