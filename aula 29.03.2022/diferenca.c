#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
#include <string.h>
 
 int numero1;
 int numero2;

int main(){
    printf("Escola Senai \n");
    printf("Nome: Diogo Henrique da Silva Furtado \n");
    printf("Escola: Senai Euclides facchini\n");


    printf("Digite o primeiro n�mero:");
    scanf("%d", &numero1);
    printf("Digite o segundo n�mero:");
    scanf("%d", &numero2);

    int diferenca = numero1 - numero2;

   if (numero1 > numero2) {
       printf("a diferen�a do maior numero pelo menor e: %d", diferenca);
   }
   if (numero2 > numero1) {
        printf("a diferen�a do maior numero pelo menor e: %d", diferenca);
   }
}