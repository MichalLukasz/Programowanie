//Cw1.3.9
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void linia(void);

int main()
{
    float a, b;
    int wybor;


    printf("Wybierz rodzaj dzialania:\n");
    linia();
    printf("1. Dodawanie\t2. Odejmowanie\n3. Mnozenie\t4. Dzielenie\n5. Potega\t6. Pierwiastek\n");
    linia();
    scanf("%d", &wybor);

    if(wybor>0 && wybor<7)
    {printf("Podaj 2 liczby\n");
    scanf("%f%f", &a,&b);}

    switch(wybor)
    {
    case 1:
            printf("Wynik = %.2f", a+b);
    break;

    case 2:
            printf("Wynik = %.2f", a-b);
    break;
    case 3:
            printf("Wynik = %.2f", a*b);
    break;
    case 4:
            printf("Wynik = %.2f", a/b);
    break;
    case 5:
            printf("Wynik = %.2f", pow(a,b));
    break;
    case 6:
            printf("Wynik = %.2f", pow(a,(1/b)));
    break;
    default:
            printf("Nie ma takiej opcji.");
    break;
    }

    return 0;
}



void linia(void)
{
    int i;

    for(i=1; i<40; i++)
        putchar('-');
    putchar('\n');
}
