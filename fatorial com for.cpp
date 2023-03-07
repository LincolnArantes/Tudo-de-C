#include <stdio.h>


int main()
{
   int i;
   int fact=1;
   int numero;
 
   printf("\nDigite um numero para procurar o fatorial : ");
   scanf("%d",&numero);
 
   if (numero<0)
   {
      printf("\nPor favor entre somente com numero positivo");
      printf(" Tente novamente. \n");
      return 1;
   } 
 
   for(i=1;i<=numero;i++)
   fact=fact*i;
   printf("\n");
   printf("Voce entrou com o numero %d e o fatorial (%d!) = %d\n",numero,numero,fact);
   
   
   
   return 0;
}
