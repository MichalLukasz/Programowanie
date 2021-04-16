#include <stdio.h>
#include <stdlib.h>

int * funkcja();

int main()
{
    int n;
    for(;;)
        {printf("Podaj dodatnia liczbe n:\n");
        scanf("%d", &n);
        if(n>0)
            break;}

    printf("Wynik: %d", funkcja(n));
    return 0;
}

int * funkcja(unsigned int n)
{
    return malloc (n*sizeof(double));
}
