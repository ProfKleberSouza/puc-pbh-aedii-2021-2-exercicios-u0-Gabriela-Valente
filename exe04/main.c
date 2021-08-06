#include <stdio.h>

int main() {
   int n1, n2, n3, maior, menor;
   scanf("%i %i %i", &n1, &n2, &n3);
   if(n1 > n2 && n1 > n3){
     maior = n1;
   }
   else if(n2 > n3){
     maior = n2;
   }
   else{
     maior = n3;
   }
   if(n1 < n2 && n1 < n3){
     menor = n1;
   }
   else if(n2 < n3){
     menor = n2;
   }
   else{
     menor = n3;
   }
   printf("MENOR = %i\n", menor);
   printf("MAIOR = %i\n", maior);
   return 0;
}