#include <stdio.h>

int main(){
//declaração de variaveis locais	
	int valor1;
	int valor2;
	int valor3;
	int valor4;
	int valor5;
	int valor6;
	int resultado_soma;
	int resultado_media;
	
	//inicialização de variaveis com valores
	valor1=2;
	valor2=3;
	valor3=3;
	valor4=5;
	valor5=7;
	valor6=10;
		
	resultado_soma = valor1 + valor2 + valor3 +valor4 + valor5 + valor6;
	
	resultado_media = resultado_soma / 6;
	
	printf("A variavel valor1 = %d\n", valor1);
		printf("A variavel valor2 = %d\n", valor2);
			printf("A variavel valor3 = %d\n", valor3);
				printf("A variavel valor4 = %d\n", valor4);
					printf("A variavel valor5 = %d\n", valor5);
						printf("A variavel valor6 = %d\n", valor6);
						
												
	printf("\n\nA media = %d", resultado_media);
	
	
	return 0;
}
