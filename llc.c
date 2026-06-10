#include <string.h>

#define MAX 100

int validarBalanceamento(const char *expr)
{
    char pilha[100];
    int topo = -1;

    for(int i = 0; expr[i] != '\0'; i++)
    {
        switch(expr[i])
        {
            case '(':
            case '[':
            case '{':
                pilha[++topo] = expr[i];
                break;

            case ')':
                if(topo < 0 || pilha[topo] != '(')
                    return 0;
                topo--;
                break;

            case ']':
                if(topo < 0 || pilha[topo] != '[')
                    return 0;
                topo--;
                break;

            case '}':
                if(topo < 0 || pilha[topo] != '{')
                    return 0;
                topo--;
                break;
        }
    }

    return topo == -1;
}
