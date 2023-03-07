#include <stdio.h>

int main() {
   const int  gol = 10;
   const int  fiat = 5;
   const char NEWLINE = '\n';
   int total;  
   
   total = gol * fiat;
   printf("Total de carros : %d", total);
   printf("%c", NEWLINE);

   return 0;
}
