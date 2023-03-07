#include <stdio.h>


int main(){
	
	float valor;
	float porcentagem;
	float resultado_multiplicacao;
	float resultado;

    
    valor=1100;
    porcentagem=10;
    
    

      resultado_multiplicacao = valor * porcentagem;	
      
      
      resultado = resultado_multiplicacao / 100;
	
	printf("O resultado da procentagem = %.2f", resultado);
	
	
	
	
	return 0;
}
