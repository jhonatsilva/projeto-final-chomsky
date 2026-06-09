#include <string.h>
#include <ctype.h>

int validarCPF(const char *cpf)
{
    if(strlen(cpf) != 14)
        return 0;

    for(int i = 0; i < 14; i++)
    {
        if(i == 3 || i == 7)
        {
            if(cpf[i] != '.')
                return 0;
        }
        else if(i == 11)
        {
            if(cpf[i] != '-')
                return 0;
        }
        else
        {
            if(!isdigit(cpf[i]))
                return 0;
        }
    }

    return 1;
}