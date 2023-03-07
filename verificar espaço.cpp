#include <stdio.h>
#include <ctype.h>

 
int main()
{
   char ch1;
   printf("Digite um caractere: \n");
   scanf("%c", &ch1);
 
   if ( isspace ( ch1 ) ){
   
      printf ( "\nEspaco" ) ;
   
   } else {
   
      printf ( "\nnao espaco" ) ;
      
                  }
      
      return 0;
}
