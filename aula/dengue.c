#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){

     printf("Escola Senai \n");
    printf("Euclides Facchini Votuporanga\n");
    printf("Diogo furtado\n");

int caso;
int confirmados;
int morte;

printf ("Quantos casos suspeitos?");
scanf  ("%d", &caso);

printf ("Quantos casos confirmados?");
scanf  ("%d", &confirmados);

printf ("quantas mortes teve?");
scanf  ("%d", &morte);

printf("casos suspeitos %d \n", caso);
printf("casos confirmados %d\n", confirmados);
printf("casos morridos %d\n", morte);

printf("total de dados %d" , caso + confirmados + morte);



}