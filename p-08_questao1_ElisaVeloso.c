//Elisa Alves Veloso
//20.2.4006
//Turma 31

#include <stdio.h>
#include <string.h>



int main() 
{
    //Declaração das variáveis
    int m, n, p, q, a, b, soma = 0;
    int matrizA [m][p];
		int matrizB [q][n];
    int matrizC [a][b];

    
    //MATRIZ A 

    //Definir o tamanho da matriz: quantidade de linhas
    while (1)
    {
      printf("Digite o valor de linhas da matriz A: ");
      scanf("%d", &m);

      if( m <= 10){  
       break;
      }
      else
      {
       printf("Número inválido! Digite novamente.\n");
      }
  
    }

    //Definir o tamanho da matriz: quantidade de Colunas
    while (1)
    {
      printf("Digite o valor de colunas da matriz A: ");
       scanf("%d", &p);

      if( p <= 10)
      { 
       break;
      }
      else
      {
       printf("Número inválido! Digite novamente.\n");
      }
    }
  	
    printf("\n");

    //Formação da matriz

    //O usuário digita os elementos da matriz
    for (int i = 0; i < m; i++ ){
      for (int j = 0; j < p; j++) {

        printf("Informe o elemento %d, %d \n", i, j);
        scanf("%d", &matrizA[i][j]);
        
      }
    }

    printf("\n");

    // Imprime a matriz A
    printf("Matriz A:\n");

    for(int i = 0; i < m; i++){
      for(int j = 0; j < p; j++){
        printf("%d ", matrizA[i][j]); 
      }
      printf("\n");
    }

    printf("\n");

    //MATRIZ B

    //Definir o tamanho da matriz: quantidade de linhas
    while (1)
    {
      printf("Digite o valor de linhas da matriz B: ");
      scanf("%d", &q);

      if( q <= 10){ 
       break;
      }
      else{
       printf("Número inválido! Digite novamente.\n");
      }
    }

    //Definir o tamanho da matriz: quantidade de colunas
    while (1){
      printf("Digite o valor de colunas da matriz B: ");
       scanf("%d", &n);

      if( n <= 10){
        break;
      }
      else{
       printf("Número inválido! Digite novamente.\n");
      }
    }
    
    printf("\n");

    //Formação da matriz 

    //O usuário digita os elementos da matriz
    for (int x = 0; x < q; x++ )
    {
      for (int y = 0; y < n; y++)
      {
          printf("Informe o elemento %d, %d", x, y);
          scanf("%d ", &matrizB[x][y]);
      }
    }

    printf("\n");

    // Imprime a matriz B
    printf("Matriz B:\n");

    for(int x = 0; x < q; x++)
    {
      for(int y = 0; y < n; y++)
      { 
        printf("%d ", matrizB[x][y]); 
      }
      printf("\n");
    }

      //Verifica condição para multiplicar as matrizes
    if(p == q)
    {
      printf("Multiplicação válida. Calculando...\n");

      //Matriz formada pela multiplicação das matrizes A e B

      for (int a = 0; a < m; a++)
      {
        for (int b = 0; b < n; b++)
        {
          for (int c = 0; c < p; c++)
          {
            soma =  soma + matrizA[a][c] * matrizB[c][b];
          }
           matrizC[a][b] = soma;

           soma = 0;
        }
      }

      printf("\n");

      // Imprime a matriz C
      printf("Matriz C:");

      for(int a = 0; a < m; a++)
      {
        for(int b = 0; b < n; b++)
        { 
          printf("%d ", matrizC[a][b]); 
        }

        printf("\n");
      }
    }
    else
    {
      printf("\n");
      printf("Dimensões diferentes. Multiplicação inválida.\n");
    }
    
  return 0;
}