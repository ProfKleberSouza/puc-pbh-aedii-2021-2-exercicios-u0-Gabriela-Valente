#include <stdio.h>

int main() {
   int n1, n2, n3, D;
   scanf("%i %i %i", &n1, &n2, &n3);
   D = n1*n2;
   printf("R = %i\n", n3);
   printf("V = %i\n", n2);
   printf("T = %i\n", n1);
   printf("D = %i\n", D);
   printf("L = %i\n", D/n3);
   return 0;
}