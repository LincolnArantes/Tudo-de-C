#include <stdio.h>
#include <ctype.h>
 
int main()
{
   char string;
   printf("Digite um texto: \n");
   scanf("%s", &string);
 
   if ( islower ( string ) ){
   
   printf ( "\nO texto esta em minusculo") ;
   
	} else {
	
   printf("\nO texto esta em maiusculo");
   
}


return 0;

}
