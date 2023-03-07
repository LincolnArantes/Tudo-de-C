#include <stdio.h>

int main()
{
    int numero_001;
    printf("Digite um numero: ");
    scanf("%d", &numero_001);
   
   
    if(numero_001 % 2 == 0)
    {
   
        printf("O numero %d = par\n", numero_001);
   
    }
   
    else
   
    {
   
        printf("O numero %d = impar\n", numero_001);
   
    }

   
   
    return 0;
}
