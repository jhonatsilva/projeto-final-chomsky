# Projeto Final - Validador Formal em Três Níveis

## Tema 1 - Cadastro, Fórmulas e Integridade

### Autor
- Jhonathan Inacio da Silva


## Níveis Implementados

### LR - Linguagem Regular

Validação de CPF no formato:

ddd.ddd.ddd-dd

### LLC - Linguagem Livre de Contexto

Validação de símbolos balanceados:

()
[]
{}

### R - Linguagem Recursivamente Enumerável

Validação da linguagem:

L = { w#w | w ∈ {0,1}* }

## Compilação

gcc src/main.c src/lr.c src/llc.c src/r.c -o validador

## Execução

./validador