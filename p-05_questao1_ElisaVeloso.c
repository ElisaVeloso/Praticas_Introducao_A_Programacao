//Elisa Alves Veloso
//20.2.4006
//Turma 31

#include <stdio.h>
#include <math.h>

long long fat(int n);

int main()
{
    long long n;
    printf("Digite o valor de n\n");
    scanf("%lld", &n);
    
    while ( n < 0 ) {
        printf("Digite um numero positivo\n");
        scanf("%lld", n);
    }
    
    if ( (n == 1) || (n == 0) ) {
      printf("%lld! : 1\n", n);
    }
    
    else {
    long long fatVariavel = fat(n);
    
    printf("%lld! : %lld", n, fatVariavel);
    }
    
    return 0;
}

long long fat(int n) {
    int i = 1;
    long long fat = 1;
       
    while (i <= n){
        fat = fat * i;
        i++;
    }
    
    return fat;
}