#include <stdio.h>
 
int main () {

  /* Abaixo onde são declaradas as variaveis locais */
  int variavel_local_1, variavel_local_2;
  int resultado;
 
  /* preenchendo a variavel com numeros na inicialização */
  variavel_local_1 = 11;
  variavel_local_2 = 21;
  
  /* o codigo abaixo mostra a soma de dois numeros e destinando o resultado a primmeira variavel */
  
 resultado = variavel_local_1 + variavel_local_2;
 
 
   /* o codigo abaixo mostra os valores de cada variavel e a soma */
  
  printf ("Valor de variavel_local_1 = %d\n Valor de variavel variavel_local_2 = %d\n Resultado da soma = %d\n", variavel_local_1, variavel_local_2, resultado);
 
  return 0;
}
