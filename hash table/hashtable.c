#include <stdio.h>
#include <stdlib.h>

// Tabela hash linear com vetor
// tamanho = 2*15 = 30 = 31

#define tamanho 31

void inicializarTabela(int t[])
{
    int i;

    for (i = 0; i < tamanho; i++)
        (t[i] = 0);
}

// função de espalhamento
int funcaoHash(int chave)
{
    return chave % tamanho;
}

void inserir(int t[], int valor)
{
    int id = funcaoHash(valor);
    while ((t[id] != 0))
    {
        id = funcaoHash(id + 1);
    }
    t[id] = valor;
}

int buscarNumero(int t[], int chave)
{
    int id = funcaoHash(chave);
    printf("\nIndice: %d", id);
    while (t[id] != 0)
    {
        if (t[id] == chave)
            return t[id];
        else
            id = funcaoHash(id + 1);
    }
    return 0;
}

void imprimir(int t[])
{
    int i;
    for (i = 0; i < tamanho; i++)
    {
        printf("%d = %d\n", i, t[i]);
    }
}

int main()
{
    int opcao, valor, indice, retorno, tabela[tamanho];
    inicializarTabela(tabela);

    do
    {
        printf("\nComandos:\n 0 - Sair\n 1 - Inserir\n 2 - Buscar indice\n 3 - Buscar numero\n 4 - Imprimir\n");
        printf("Digite um comando de acordo com seu numero:\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
            //chaves
        case 1:
            printf("Digite o valor para Inserir: ");
            scanf("%d", &valor);
            inserir(tabela, valor);
            break;
        case 2:
            printf("Digite o indice: ");
            scanf("%d", &indice);
            if (indice >= 0 && indice < tamanho)
            {
                printf("Valor no indice %d: %d\n", indice, tabela[indice]);
            }
            else
            {
                printf("Indice invalido.\n");
            }
        case 3:
            printf("Digite o Numero para Buscar: ");
            scanf("%d", &valor);
            retorno = buscarNumero(tabela, valor);
            if (retorno != 0)
            {
                printf("\nNumero encontrado: %d\n", retorno);
            }
            else
            {
                printf("\nNumero nao encontrado!");
            }
            break;
        case 4:
            imprimir(tabela);
            break;
        default:
            printf("Invalido!");
        }
    } while (opcao != 0);

    return 0;
}
