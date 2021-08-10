//Elisa Alves Veloso
//20.2.4006 
//Turma 31

#include <stdio.h>

int main(){
  int sequencia[15], valor, aux;
  
   for (int i = 0; i < 15; i++) {
    scanf("%d", &sequencia[i]);
   }

    printf("Digite o valor a ser deslocado\n");
    scanf("%d", &valor);

   for (int i = 0 ; i < valor; i++) {
      aux = sequencia[0];
      for (int j = 0; j < 14; j++) {
        sequencia[j] = sequencia[j + 1];
      }
      sequencia[14] = aux;
    } 

    for (int i = 0; i < 15; i++){
      printf("%d ", sequencia[i]);
    }
    printf("\n");
  return 0;
}
