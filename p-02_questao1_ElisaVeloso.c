// Elisa Alves Veloso
// 20.2.4006
// Turma 31

#include <stdio.h>

int main() {
  char letra;

  printf("Digite uma letra:\n");
  scanf("%c", &letra);

  if ( (letra ==  'a') || (letra == 'e') || (letra == 'i') || (letra == 'o') || (letra == 'u') || (letra == 'A') || (letra == 'E') || (letra == 'I') || (letra == 'O') || (letra == 'U') ) 
    printf("%c eh uma vogal\n", letra);
  
  else 
    printf("%c eh uma consoante\n", letra);
  
  return 0;
}