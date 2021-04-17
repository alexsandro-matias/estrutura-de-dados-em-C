#include <stdio.h>
#include <stdlib.h>

void trocarNumeros(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

void ordenacaoBolha(int * vetor, int size)
{

    for (int i = 0 ; i < size - 1 ; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (vetor[i] > vetor[j])
            {
                trocarNumeros(vetor[i], vetor[j]);
            }
        }

    }

}


int main()
{

    return 0;
}
