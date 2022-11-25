#include <stdio.h>
#include <stdlib.h>

int main()
{
     int contador = 0;
     double metade,valor;

    while (contador < 10)
    {
        contador = contador +1;

        printf("Digite o valor: \n");
        scanf("%lf",&valor);

        metade = valor/2;

        printf("A metade e %.2f: \n",metade);
    }
}
