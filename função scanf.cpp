#include <stdio.h>
int main( ) {

   char val1[100];
   int val2;

   printf( "Digite um valor:");
   scanf("%s %d", val1, &val2);

   printf( "\nVoce digitou: %s %d ", val1, val2);

   return 0;
}
