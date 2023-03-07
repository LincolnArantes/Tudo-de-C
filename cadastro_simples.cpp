#include <stdio.h>


int main(){
	
	char nome_completo[200];
	char endereco[200];
	char bairro[200];
	char cep[200];
	char cidade[200];
	char estado[200];
	
	
	printf("\n---------------------------------------------------------- ");
	printf("\n----------------- Cadastro pessoa fisica ----------------- ");
	printf("\n---------------------------------------------------------- ");
	
	printf("\nInforme seu nome: \n");
        fgets(nome_completo, 45, stdin);	
	
	
	printf("Informe seu endereco: \n");
        fgets(endereco, 45, stdin);
		
	
	printf("Informe seu bairro: \n");
        fgets(bairro, 45, stdin);	
        
    printf("Informe seu cep: \n");
        fgets(cep, 10, stdin);
		
			
	printf("Informe sua cidade: \n");
        fgets(cidade, 35, stdin);
	
	printf("Informe seu estado: \n");
        fgets(estado, 20, stdin);
        
        
        
        
    printf("\n---------------Seu Cadastro de pessoa fisica ------------- ");
	printf("\n---------------------------------------------------------- "); 
	
	printf("\nNome: %s\n", nome_completo);   
		printf("Endereco: %s\n", endereco);  
			printf("bairro: %s\n", bairro);  
				printf("Cep: %s\n", cep);  
					printf("Cidade: %s\n", cidade);  
					printf("Estado: %s\n", estado); 
					
	printf("\n---------------------------------------------------------- "); 
	
			
		
	return 0;
}
