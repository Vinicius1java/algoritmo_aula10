#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador = 0,idade,sexo;
    char nome[20];

    while (contador < 3)
    {
        printf("Digite seu nome: \n");
        scanf("%s",&nome);

        printf("Digite sua idade: \n");
        scanf("%d",&idade);

        printf("Digite seu sexo digitando 1 para masculino e 2 feminino");
        scanf("%d",&sexo);

       if (sexo == 1 && idade >21)
       {
          printf("caso seja você seja homem, seu nome e %s: \n",nome);
       }
       else
       {
           printf("voce e uma mulher \n");
       }
       contador = contador +1;
    }

}
