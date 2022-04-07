#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
#include <string.h>

 
 int main(){

    printf("Escola Senai \n");
    printf("Euclides Facchini Votuporanga\n");
    printf("Diogo furtado\n");


int area1;
int area2;
int altura1;
int altura2;


     printf ("Digite a area do primeiro retangulo em cm: ");
     scanf("%d", &area1);

     printf("digite a altura do primeiro retangulo: ");
     scanf("%d", &altura1);

     printf ("Digite a area do segundo retangulo em cm: ");
     scanf("%d", &area2);

     printf("digite a altura do primeiro retangulo: ");
     scanf("%d", &altura2);

     printf("A area do primeiro retangulo é de: %d\n", area1 * altura1);
     printf("A area do segundo retangulo é de: %d\n", area2 * altura2);


     if (area1 * altura1 < area2 * altura2 ){
            printf("A area do segundo retangulo é maior");
     }
      if (area1 * altura1 > area2 * altura2 ){
          printf("A area do primeiro retangulo é maior");

     } else if (area1 * altura1 == area2 * altura2){
         printf("A area de ambos sao iguais");
     }

    
   
 }
  

     
 
 