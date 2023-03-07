#include <stdio.h>
#include <string.h>

int main () {

   char str1[8] = "Bom ";
   char str2[4] = "dia";
   
   /* Concatenar*/
   strcat( str1, str2);
   printf("strcat( str1, str2): %s\n", str1 );

 

   return 0;
}
