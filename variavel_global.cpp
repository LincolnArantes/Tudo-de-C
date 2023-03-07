#include <stdio.h>
 
/* Declaração de variavel Global*/
int nome_da_variavel_global;
 
int main () {

  /* Variaveis local */
  int aaa, bbb;
 
  /* preenchimento de variaveis com valores */
  aaa = 15;
  bbb = 30;
  nome_da_variavel_global = aaa + bbb;
 
  printf ("O valor de a = %d, b = %d e nome_da_variavel_global = %d\n", aaa, bbb, nome_da_variavel_global);
 
  return 0;
}
