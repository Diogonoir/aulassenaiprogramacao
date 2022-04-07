#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
#include <string.h>



int main(void){
    printf("Escola Senai Euclides Facchini  Votuporanga \n");
    printf("Diogo henrique\n"); 


    float c, f;
 
    printf("Digite a temperatura em ºCelsius = "); scanf("%f", &c);
 
    f = (c *1.8 + 32);
 
    printf("a temperatura em ºF = %.1f", f);
 

}
