#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador = 0,idade,qtdpessoa=0;

    while (contador < 5)
    {
        printf("Digite sua idade: \n");
        scanf("%d",&idade);

       if (idade >=18)
       {

            qtdpessoa=qtdpessoa +1;
       }

       contador = contador +1;
    }
    printf("o quantidade de pessoas maiores de idade e %d: \n",qtdpessoa);
}
