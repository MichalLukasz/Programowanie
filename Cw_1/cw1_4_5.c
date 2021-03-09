//Cw1.4.5
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n, i, suma=0, stan;
    while(stan!=1)
    {
    printf("Podaj nieujemna liczbe n: \n");
    scanf("%d", &n);
    if(n>0)
        stan=1;
    else
        printf("Blad, sproboj jeszcze raz.\n\n");
    }

    for(i=0; i<=n; i++)
        suma+=i*i;

    printf("Suma kwadratow liczb od 0 do n to: %d\n", suma);
    return 0;
}
