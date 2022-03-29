#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
#include <string.h>

int alunos;
int alunas;

int main(){  
    printf("Escola Senai \n");  
    printf("Nome: Diogo Henrique da Silva Furtado \n");
    printf("Escola: Senai Euclides facchini\n");


    printf("Digite a quantidade de alunos:");
    scanf("%d", &alunos);

    
    printf("Digite a quantidade de alunas:");
    scanf("%d", &alunas);

    if(alunas > alunos){
        printf("Existem mais alunas");
    }
    else{
        printf("Existem mais alunos");
    }






}
