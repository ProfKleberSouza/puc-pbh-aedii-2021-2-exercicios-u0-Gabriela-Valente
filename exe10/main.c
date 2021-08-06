#include <stdio.h>
 
int main(){
  int numeros[10];
  int aux;
  for(int i = 0; i < 10; i++){
    scanf("%d", &numeros[i]);
  }
  for (int i = 0, j = 9; i < 5; i++, j--){
    aux = numeros[i];
    numeros[i] = numeros[j];
    numeros[j] = aux;
  }
  for(int i = 0; i < 10;i++){
    printf("%d\n", numeros[i]);
  }
  return 0;
} 