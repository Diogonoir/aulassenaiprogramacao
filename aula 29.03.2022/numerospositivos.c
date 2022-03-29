#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
    
    printf("Escola Senai \n");
    printf("Nome: Diogo Henrique da Silva Furtado \n");
    printf("Escola: Senai Euclides facchini\n");

    int n;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    for (int i = 1; i <n; i++){
        if (i%2 !=0){
            printf("%d\n", i);
        }
    }
}