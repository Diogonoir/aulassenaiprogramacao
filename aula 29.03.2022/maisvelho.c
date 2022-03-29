#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
#include <string.h>

int pedro;
int joana;
int ismael;


int main(){  
    
  printf("Escola Senai \n");
  printf("Nome: Diogo Henrique da Silva Furtado \n");
  printf("Escola: Senai Euclides facchini\n");

    printf("Digite a idade do Pedro:");
    scanf("%d", &pedro);
    printf ("Digite a idade de Joana:");
    scanf("%d", &joana);
    printf("Digite a idade de Ismael:");
    scanf("%d", &ismael);

   
     if (pedro > joana && ismael){
     printf("Pedro é mais velho");
    
   if (joana > pedro && ismael) {
    printf("Joana é a mais velha");

    }
     }
    if (ismael > pedro && joana){
    printf("Ismael é mais velho");
    }
   



}
