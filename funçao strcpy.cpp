#include <stdio.h>
#include <string.h>

int main () {

   char string1[200] = "Voce ta quase la - continue aprendendo";
   char string2[200];


  
   strcpy(string2, string1);
   printf("Frase que foi copiada de uma variavel para a outra: \n%s", string2 );

 

   return 0;
}
