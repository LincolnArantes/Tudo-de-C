#include <stdio.h>
 
int main () {

   /* local onde a variavel foi definida*/
   char opcao = 'F';

   switch(opcao) {
      case 'A' :
         printf("Muito bom!\n" );
         break;
         
      case 'B' :
      	 printf("Conseguiu\n" );
         break;
      	
      case 'C' :
         printf("Legal demais\n" );
         break;
         
      case 'D' :
         printf("Bom\n" );
         break;
         
      case 'F' :
         printf("Excelente\n" );
         break;
         
      default :
         printf("Opcao Invalida\n" );
   }
   
   printf("Sua opcao =  %c\n", opcao );
 
   return 0;
}
