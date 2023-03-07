#include <stdio.h>
#include <string.h>
#include <conio.c>
#include <windows.h>
#include <locale.h>
#include <ctype.h>


// procedimento que converte uma string para mai˙sculo
void maiusculo(char s1[], char s2[]){
    int i = 0;
    while(s1[i] != '\0'){
        s2[i] = toupper(s1[i]);
        i++;
    }
    s2[i] = '\0'; // caracteer que indica o fim da string
}


int main(){
	
setlocale(LC_ALL,"");
	
	char nome_cliente[200];
	char numero_telefone[200];
	char detalhe[200];
	int len;
	
//	 printf("================================================================================\n");
textbackground(7);
textcolor(15);
	printf("SISTEMA DE EMISS√O DE RECIBOS - v1                                              ");
//	 printf("================================================================================\n");
//textbackground(1);	
	
	printf("\n");
		printf("\n");
			printf("\n");
				printf("\n");
				
				
	
	textcolor(1);
	printf("Digite o nome cliente: \n");
	textcolor(0);
	textbackground(15);
	setbuf(stdin,NULL);
	scanf("%s", &nome_cliente);
	
	





   //len = strlen(nome_cliente);
   
   
   
	
	if ( nome_cliente == "" ){
		
		
		
		textcolor(1);
	printf("Digite o nome cliente: \n");
	textcolor(0);
	textbackground(15);
	setbuf(stdin,NULL);
	scanf("%s", &nome_cliente);
	
		
		
	} 
		
		
//	printf("passou");	
		
		
		
		
		
            	printf("\n");
 				printf("\n");
	
	
	
	
	textcolor(1);	
printf("Digite o numero de telefone: \n");
	textcolor(0);
	textbackground(15);
	setbuf(stdin,NULL);
scanf("%s", &numero_telefone);

                
                
                
            	if ( numero_telefone == "" ){
		
		
		
			textcolor(1);	
printf("Digite o numero de telefone: \n");
	textcolor(0);
	textbackground(15);
	setbuf(stdin,NULL);
scanf("%s", &numero_telefone);
		
		
		
	}     
                
                
                
                
                
                
                
				printf("\n");
 				printf("\n");



	
		textcolor(1);
printf("Detalhes: \n");

	textcolor(0);
	textbackground(15);
	setbuf(stdin,NULL);
scanf("%s", &detalhe);

     	if ( detalhe == "" ){
		
		
		textcolor(1);
printf("Detalhes: \n");

	textcolor(0);
	textbackground(15);
	setbuf(stdin,NULL);
scanf("%s", &detalhe);
		
		
		
		
	} 

	
		
	
	
	
textbackground(1);		
	
	// passando para maiusculo
	
  
    char str2[500];
    char str3[500];
    char str4[500];
  

    maiusculo(nome_cliente, str2);
   
     maiusculo(numero_telefone, str3);
	 
	  maiusculo(detalhe, str4);	
	
	
	// exibindo os dados para conferencia
	
	textcolor(11);
	textbackground(0);
	printf("++++++++++++++++++++ CONFIRA OS DADOS ++++++++++++++++++++++++\n\n");
	
	printf("\n");
	

	printf("RECIBO PARA..: %s\n", str2);
	
	printf("TELEFONE.....: %s\n", str3 );
	
	printf("DETALHES.....: %s\n", str4 );
	
	printf("\n");
	
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n");
	
    printf("\n");
	

//	 printf("OS DADOS EST√O CORRETOS? [S=sim ou N=n„o]                                       ");
	 
	 
	 
	 
	textcolor(7);
	textbackground(0);

///variavel para selecionar impress√£o


char op_imprimir3[10];

//fim variavel para selecionar impress√£o



printf("\nLigue a impressora e observe se ela esta pronta para imprimir");


/// VEM AQUI
ROTULO_OP_IMPRIMIR3:

	textcolor(15);
	textbackground(4);
printf("\nDeseja imprimir agora?[S=sim N=n„o]");

  setbuf(stdin,NULL);
  gets(op_imprimir3);







///VALIDA√á√ïES


  ////  VALIDA√á√ÉO VAZIO
           
              if((strlen(op_imprimir3)==0) || (strcmp(op_imprimir3,"0")==0)) {
              printf("Campo vazio - DIGITE");

               goto ROTULO_OP_IMPRIMIR3;
                       }


 //VALIDA√á√ÉO ONDE O USUARIO SO PODE DIGITAR 1 CARACTERES
              if((strlen(op_imprimir3) > 1)){
     
               printf("Muito grande - DIGITE APENAS S OU N (SEM ESPA«OS)");

               goto ROTULO_OP_IMPRIMIR3;

                 }

//VALIDA√á√ÉOES








if ((strcmp (op_imprimir3,"S") == 0 ) || (strcmp (op_imprimir3,"s") == 0)){


    

textcolor(YELLOW);     

///**** O CAMINHO PARA ABRIR O ARQUIVO PARA IMPRESS√ÉO JA ESTA CONFIGURADO CORRETAMENTE


 ///ESSA FUN√á√ÉO DEVE SER HABILITADA NO SISTEMA WINDOWS * funciona no windows

  // system("notepad /p gerados/etiquetas/etiquetasunica.txt");
    
 
 printf("\n\nIMPRIMINDO.....!\n\n");


 ///FINAL ESSA FUN√á√ÉO DEVE SER HABILITADA NO SISTEMA WINDOWS

} else{

///NAO IMPRIMIR

 printf("\n\nN√O IMPRIMIDO CONFORME SUA SELE«√O!\n\n");

}



	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	
	textbackground(0);
	
	return 0;
}
