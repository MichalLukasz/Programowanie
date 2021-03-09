//Cw1.3.7
#include <stdio.h>
#include <stdlib.h>

int main()
{   float a, b, c, delta;

    printf("ax^2+bx+c=0\n");
    printf("Podaj liczbe a:\n");
    scanf("%f", &a);
    printf("Podaj liczbe b:\n");
    scanf("%f", &b);
    printf("Podaj liczbe c:\n");
    scanf("%f", &c);

    delta=(b*b)-(4*a)*c;

    if(a==0)
        printf("To nie rownanie kwadratowe (a=0)\n");
    else if(delta>0)
        printf("x1= %.2f\nx2= %.2f", (-b+sqrt(delta))/(2*a), (-b-sqrt(delta))/(2*a));
    else if(delta==0)
        printf("x0= %.2f", -b/(2*a));
    else if(delta<0)
        printf("Brak rozwiazan, delta<0\n");
    return 0;
}
