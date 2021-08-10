//Elisa Alves Veloso
//20.2.4006
//Turma 31

#include <stdio.h>
#include <string.h>

int main() {
    
    char frase[500];]
    printf("Digite o texto para censurar:\n")
    fgets(frase, 500, stdin);
    //scanf("%[^\n]", frase);

    for (int i = 0; i < strlen(frase); ++i) {

      if (frase[i] == 'a' || frase[i] == 'A'){
        frase[i] = '@';
      }

      if (frase[i] == 'e' || frase[i] == 'E'){
        frase[i] = '_';
      }

      if (frase[i] == 'i' || frase[i] == 'I'){
        frase[i] = '|';
      }

      if (frase[i] == 'o' || frase[i] == 'O'){
        frase[i] = '0';
      }

      if (frase[i] == 'u' || frase[i] == 'U'){
        frase[i] = '#';
      }

      if (frase[i] == 's' || frase[i] == 'S'){
        frase[i] = '$';
      }
      
      printf("%c", frase[i]);
    }

    return 0;
}