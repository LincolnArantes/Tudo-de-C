#include <stdio.h>
 
int main () {

   /* 
   
   local onde foi definida a variavel
   
    */
   int _nomevariavel = 1000;
 
   /* verificando a condição */
   if( _nomevariavel == 100 ) {
      /* Se a condição for verdadeira vai mostrar a frase abaixo */
      printf("O valor = 100\n" );
      
   } else if( _nomevariavel == 400 ) {
      /* if else if condição for verdadeira */
      printf("O valor = 400\n" );
      
   } else if( _nomevariavel == 700 ) {
      /* if else if condição for verdadeira  */
      printf("O valor = 700\n" );
      
   } else {
      
	  /* Mostra a frase abaixo se nehuma das condições for verdadeira */
      printf("Nenhum dos valores correspondem\n" );
   }
   
   printf("O valor exato = %d\n", _nomevariavel );
 
   return 0;
}
