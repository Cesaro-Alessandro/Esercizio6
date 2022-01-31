#include <stdio.h>
int main()
{
    int numero1, numero2, numero3, swap, media = 0;
    do
    {
        printf("Inserisci un numero \n");
        scanf("%d", &numero1);
        printf("Inserisci un secondo numero \n");
        scanf("%d", &numero2);
        if (numero1 > numero2)
        {
            swap = numero1;
            numero1 = numero2;
            numero2 = swap;
        }
        
        printf("Inserisci un terzo numero \n");
        scanf("%d", &numero3);

        media = (((double)numero1 + (double)numero2 + (double)numero3)/3) + media;


    } while (numero3 > numero1 && numero3 < numero2);
    printf("Media totale %d \n", media);
    return 0;
}