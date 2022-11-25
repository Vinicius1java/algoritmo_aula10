#include <stdio.h>
#include <stdlib.h>

int main()
{
     int contador = 0;
     double anterior,valor;

    while (contador < 10)
    {
        contador = contador +1;

        printf("Digite o valor: \n");
        scanf("%lf",&valor);

        valor = valor + anterior;
        anterior = valor;

        printf("o valor da soma e %.2f: \n",anterior);
    }
}
