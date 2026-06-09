#include <string.h>

int validarWW(const char *cadeia)
{
    int posHash = -1;
    int tamanho = strlen(cadeia);

    for(int i = 0; i < tamanho; i++)
    {
        if(cadeia[i] == '#')
        {
            if(posHash != -1)
                return 0;

            posHash = i;
        }
    }

    if(posHash == -1)
        return 0;

    int esquerda = posHash;
    int direita = tamanho - posHash - 1;

    if(esquerda != direita)
        return 0;

    for(int i = 0; i < esquerda; i++)
    {
        if(cadeia[i] != cadeia[posHash + i + 1])
            return 0;
    }

    return 1;
}