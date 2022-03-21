#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
#include <string.h>

void abertura (int multiplicador ){
 printf("Escola Senai \n");
    printf("Euclides Facchini Votuporanga\n");
    printf("Diogo furtado\n");

}

int main(){

int multiplicador =2;
//passar um inteiro diretamente

abertura(multiplicador);

for(int x = 0; x <10; x++){
int resultado = multiplicador * x;

printf("%d x %d = %d", x , multiplicador, resultado);

}

}