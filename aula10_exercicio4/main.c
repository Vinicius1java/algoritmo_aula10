#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador=0,variavel;

    printf("O Digite um valor \n");
    scanf("%d", &variavel);

    while (contador<=variavel)
    {

        printf("o valor do contador é %d \n",contador);
        contador = contador +1;
    }
}
