#include <string.h>

#define MAX 100

int validarBalanceamento(const char *expr)
{
    char pilha[MAX];
    int topo = -1;

    for(int i = 0; expr[i] != '\0'; i++)
    {
        char c = expr[i];

        if(c == '(' || c == '[' || c == '{')
        {
            pilha[++topo] = c;
        }
        else if(c == ')' || c == ']' || c == '}')
        {
            if(topo < 0)
                return 0;

            char abertura = pilha[topo--];

            if(c == ')' && abertura != '(')
                return 0;

            if(c == ']' && abertura != '[')
                return 0;

            if(c == '}' && abertura != '{')
                return 0;
        }
    }

    return topo == -1;
}