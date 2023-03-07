#include <stdio.h>

int max(int num1, int num2) {


   int result;
 
   if (num1 > num2)
      result = num1;
   else
      result = num2;
 
   return result; 
}


int main(){
	
	int retorno;
	
	retorno= max(245,1000);
	
	
	printf("O maior numero entre os dois = %d", retorno);
	
	
	return 0;
	
	
	
	
	
}
