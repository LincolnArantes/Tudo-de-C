#include <stdio.h>
 
int main () {

   /* local onde as variaveis são definidas */
   int memoria = 10;
 
   /* Verificão da condição */
	
   if(memoria < 11 ) {
      /* se a condição for verdadeira, a frase abaixo sera mostrada */
      printf("Numero armazenado na variavel menor que 11\n" );
   }
   
   
   /* O valor abaixo sera mostrado de qualquer forma pois o mesmo não esta dentro da condição */
   
   printf("O valor da variavel memoria = %d\n", memoria);
 
   return 0;
}
