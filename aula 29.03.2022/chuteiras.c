#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
#include <string.h>


int chuteira1;
int chuteira2;
int chuteira3;

int main(){
     printf("Nome: Diogo Henrique da Silva Furtado \n");
    printf("Escola: Senai Euclides facchini\n");


    printf("Digite a quantidade da chuteiras da marca A:");
    scanf("%d", &chuteira1);
    printf("Digite a quantidade da chuteiras da marca B:");
    scanf("%d", &chuteira2);
    printf("Digite a quantidade da chuteira da marca C:");
    scanf("%d", &chuteira3);

    printf("A quantidade de chuteiras da marca A é de: %d\n", chuteira1);

    printf("A quantidade de chuteira da marca B é de: %d\n", chuteira2);

    printf("A quantidade de chuteira da marca C é de: %d\n", chuteira3);



}