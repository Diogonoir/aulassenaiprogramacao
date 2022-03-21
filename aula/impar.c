#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int a;
  int b;

  printf("Digite o primeiro numero: ");
  scanf("%d", &a);

  printf("Digite o segundo numero: ");
  scanf("%d", &b);

  for (int i = a; i <= b; i++) {
    if (i % 2 == 0) {
      printf("o par é; %d\n", i);
    }
  }
}