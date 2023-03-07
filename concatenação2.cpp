#include <stdio.h>
#include <string.h>

int main () {

   char string1[5]="Ola ";
   char string2[8]="pessoal";
   char tudo_junto[20];   
   
   
   
   /* Concatenar*/
   strcat( string1, string2);
   
   tudo_junto =   strcat( string1, string2);
   
   printf("As palavras juntas formam = %s\n", tudo_junto );

 

   return 0;
}
