#include <stdio.h>

#include <stdlib.h>

int main()

{

int i, n;

printf("Gerando 6 numeros entre 1 and 100\n");

for (i = 1; i <= 6; i++)

{

n = rand() % 100 + 1;

printf("%d ", n);

}

return 0;

}
