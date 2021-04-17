#include <stdio.h>
#include <stdlib.h>

void trocarNumeros(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

void ordenacaoBolha(int * vetor, int tamanho)
{

    for (int i = 0 ; i < tamanho - 1 ; i++)
    {
        for (int j = i + 1; j < tamanho; j++)
        {
            if (vetor[i] > vetor[j])
            {
                trocarNumeros(vetor[i], vetor[j]);
            }
        }

    }

}

void selectionsort(int * vetor, int tamanho)
{
    int posicaoMenor;


    for (int i = 0 ; i < tamanho; i++)
    {
        // posição do menor valor.
        posicaoMenor = i;

        for (int j = i+1; j < tamanho; j++)
        {
            if(vetor[posicaoMenor] > vetor[j])
            {
                //Pegando a menor posição
                posicaoMenor = j;
            }


        }

        // Para garatir que não haja comparações de valores iguais
        if(i != posicaoMenor)
        {
            swap(vetor[posicaoMenor], vetor[i]);
        }


    }

}


int main()
{

    return 0;
}
