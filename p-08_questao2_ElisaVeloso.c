//Elisa Alves Veloso
//20.2.4006
//Turma 31

#include<stdio.h>
#include<string.h>

int main() {
 int valor = 0;
 char palavra[100], inversa[100];

 printf("\nDigite uma palavra ou FIM para sair: ");
 gets(palavra);

 if(strcmp(palavra,"FIM") != 0) {
    //Copiar a palavra digitada
    strcpy(inversa, palavra);
    //Inverter a palavra copiada
    strrev(inversa);

    valor = strcmp(palavra, inversa);

    if (valor == 0) {
      printf("\nA palavra %s eh palindroma\n", palavra);
    }
    else {
      printf("\nA palavra %s nao e palindroma\n", palavra);
    }
  }

  else 

 return 0;
}