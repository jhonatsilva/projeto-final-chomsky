#include <stdio.h>
#include <string.h>

#include "lr.h"
#include "llc.h"
#include "r.h"

void removerQuebraLinha(char *texto)
{
    texto[strcspn(texto, "\n")] = '\0';
}

int main()
{
    int opcao;
    char entrada[200];

    do
    {
        printf("\n====================================\n");
        printf(" VALIDADOR FORMAL EM TRES NIVEIS\n");
        printf("====================================\n");
        printf("1 - LR  (CPF)\n");
        printf("2 - LLC (Balanceamento)\n");
        printf("3 - R   (w#w)\n");
        printf("0 - Sair\n");
        printf("Opcao: ");

        scanf("%d", &opcao);
        getchar();

        switch(opcao)
        {
            case 1:

                printf("CPF: ");
                fgets(entrada, sizeof(entrada), stdin);

                removerQuebraLinha(entrada);

                if(validarCPF(entrada))
                    printf("ACEITO\n");
                else
                    printf("REJEITADO\n");

                break;

            case 2:

                printf("Expressao: ");
                fgets(entrada, sizeof(entrada), stdin);

                removerQuebraLinha(entrada);

                if(validarBalanceamento(entrada))
                    printf("ACEITO\n");
                else
                    printf("REJEITADO\n");

                break;

            case 3:

                printf("Cadeia: ");
                fgets(entrada, sizeof(entrada), stdin);

                removerQuebraLinha(entrada);

                if(validarWW(entrada))
                    printf("ACEITO\n");
                else
                    printf("REJEITADO\n");

                break;
        }

    } while(opcao != 0);

    return 0;
}
