#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int pot();

int main()
{
    int n, m;
    for(;;)
    {
        printf("Podaj nieujemna liczbe n: \n");
        scanf("%d", &n);
        if(n>=0)
            break;
    }
    for(;;)
    {
        printf("Podaj nieujemna liczbe m: \n");
        scanf("%d", &m);
        if(n != 0)
        {   if(m>=0)
                break;}
        else
            {if(m>0)
                break;}
    }
    printf("Wynik: %d", pot(n, m));
    return 0;
}

int pot(int x, int y)
{
    int wynik = pow(x, y);
    return wynik;
}
