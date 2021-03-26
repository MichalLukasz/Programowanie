#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int pot();

int main()
{
    int n;
    for(;;)
    {
        printf("Podaj nieujemna liczbe n: \n");
        scanf("%d", &n);
        if(n>=0)
            break;
    }
    printf("Wynik: %d", pot(n));
    return 0;
}

int pot(int x)
{
    int wynik = pow(2, x);
    return wynik;
}
