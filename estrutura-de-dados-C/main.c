#include <stdio.h>
#include <stdlib.h>

void trocarNumeros(int *a, int *b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

int determinarTamanhoVetor(int *vetor)
{
    return sizeof(vetor)/sizeof(int);
}

//void clonarVetor(int *vetorCopiado, int *vetorOriginal)
//{
//    int tamanhoVetor = determinarTamanhoVetor(vetorOriginal);
//    for (int i = 0 ; i < tamanhoVetor ; i++)
//    {
//        vetorCopiado[i] = vetorOriginal[i];
//    }
//
//
//}

//void aumentarVetor(int *vetor , int numero)
//{
//    int tamanhoVetor = sizeof(*vetor)/sizeof(int);
//    int vetorAuxiliar[tamanhoVetor++];
//
//    if(tamanhoVetor == 1)
//    {
//        vetor[0] = numero;
//        clonarVetor(vetor, vetorAuxiliar);
//
//    }
//    else
//    {
//
//        vetor[tamanhoVetor--] = numero;
//
//    }
//
//
//}

void imprimirVetor(int *vetor)
{
    int tamanhoVetor = determinarTamanhoVetor(*vetor);
    for (int i = 0; i < tamanhoVetor; i++)
    {
        printf("- %d -" , vetor[i]);
    }
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
    trocarNumeros(vetor[posicaoMenor], vetor[i]);
}


    }

}


int main()
{
    int vetor1[4] = {4,0,1,3}, vetor2[3];

//    clonarVetor(*vetor1, *vetor2);

    imprimirVetor(vetor1);





//    printf("%d" , tamanho);
//
//    aumentarVetor(vetor, 10);
//    aumentarVetor(vetor, 12);





    return 0;
}
