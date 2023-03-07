#include <stdio.h>

#include <stdlib.h>

int main()

{

int i, n;

printf("Gerando 5 numeros entre 0 and 100\n");

for (i = 1; i <= 5; i++)

{

n = rand() % 100;

printf("%d ", n);

}

return 0;

}
