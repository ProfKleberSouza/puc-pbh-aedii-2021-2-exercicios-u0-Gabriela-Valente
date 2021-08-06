#include <stdio.h>

int main() {
  int n1, maior = 0, menor = 0, n;
  scanf("%d", &n1);
  for(int i = 0; i < n1; i++){
    scanf("%d", &n);
    if(i == 0){
      maior = n;
      menor = n;
    }
    else{
      if(n > maior){
        maior = n;
      }
      if(n < menor){
        menor = n;
      }
    }
  }
  printf("MENOR = %d\n", menor);
  printf("MAIOR = %d\n", maior);
  return 0;
}