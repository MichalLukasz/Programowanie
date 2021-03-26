#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int f();

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
    printf("Wynik: %d", f(n));
    return 0;

}
int f(int x)
{
    if(x == 1)
        return 2*1+5;
    if(x>0 && x!= 1)
        return 2*f(x-1)+5;
    else
        return x;
}
