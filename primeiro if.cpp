#include <stdio.h>
 
int main () {

   /* local onde as variaveis s�o definidas */
   int memoria = 10;
 
   /* Verific�o da condi��o */
	
   if(memoria < 11 ) {
      /* se a condi��o for verdadeira, a frase abaixo sera mostrada */
      printf("Numero armazenado na variavel menor que 11\n" );
   }
   
   
   /* O valor abaixo sera mostrado de qualquer forma pois o mesmo n�o esta dentro da condi��o */
   
   printf("O valor da variavel memoria = %d\n", memoria);
 
   return 0;
}
