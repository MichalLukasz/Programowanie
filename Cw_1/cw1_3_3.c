//Cw1.3.3
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c, maxi, mini;
    printf("Podaj 3 liczby: \n");
    scanf("%d%d%d", &a,&b,&c);

    maxi=a;
    if(b>maxi) maxi=b;
    if(c>maxi) maxi=c;

    mini=a;
    if(b<mini) mini=b;
    if(c<mini) mini=c;

    printf("Najwieksza liczba to: %d\nNajmniejsza liczba to: %d", maxi, mini);
    return 0;
}
