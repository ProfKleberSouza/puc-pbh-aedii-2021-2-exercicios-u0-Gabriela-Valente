#include <stdio.h>

int main() {
   int a, b, c;
   scanf("%i %i %i", &a, &b, &c);
   if(a < b + c && b < a + c && c < a + b){
     if(a == b && a == c){
       printf("TRIANGULO EQUILATERO");
     }else if((a == b && a != c) || (a == c && a != b) || (b == c && b != a)){
       printf("TRIANGULO ISOCELES");
     }
     else{
       printf("TRIANGULO ESCALENO");
     }
   }
   else{
     printf("OS LADOS NAO FORMAM UM TRIANGULO");
   }
   return 0;
}