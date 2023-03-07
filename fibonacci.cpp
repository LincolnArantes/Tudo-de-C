#include <stdio.h>

int main(){
	int numero, f001=0, f002=1, f003;
	
	printf("Digite um numero para obter a sequencia de fibonacci");
	scanf("%d", &numero);
	
	if(numero < 0){
		printf("Numero invalido");
		
	}else{
		
		printf("0 - 1");
		
		while (f002 < numero){
			f003=f002 + f001;
			
			printf(" -%d", f003);
			
			f001 = f002;
			f002 = f003;
			
		}
		
		printf("\n");
		
		
			
		return 0;	
			
			
			
		}
		
		
		
		
		
		
	}
	
	
	
	
	

