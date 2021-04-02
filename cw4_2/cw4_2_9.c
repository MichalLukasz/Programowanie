#include <stdio.h>
#include <stdlib.h>

void fun1();
void fun2();
void fun3();

int main()
{
    int i, n;
    printf("Podaj liczbe komorek tablicy: ");
    scanf("%d", &n);

    int tab1[n];
    int tab2[n];
    int tab3[n];

    printf("Podaj n liczb 1 tablicy:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &tab1[i]);

    printf("Podaj n liczb 2 tablicy:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &tab2[i]);

    printf("Podaj n liczb 3 tablicy:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &tab3[i]);

    for (i = 0; i < n; i++)
        printf("%d\t", *(tab1+i));

    printf("\n");

    for (i = 0; i < n; i++)
        printf("%d\t", *(tab2+i));

    printf("\n");

    for (i = 0; i < n; i++)
        printf("%d\t", *(tab3+i));
    printf("\n");

    printf("\n\na: \n");
    fun1(tab1, tab2, tab3, n);

    printf("\n\nb: \n");
    fun2(tab1, tab2, tab3, n);

    printf("\n\nc: \n");
    fun3(tab1, tab2, tab3, n);


    return 0;
}



void fun2(int t1[], int t2[], int t3[], int x)
{
    int i, srednia, t2_2[x];
    for (int i = 0; i < x; i++)
    {
        srednia=*(t1+i);
        if(*(t2+i) > srednia && *(t2+i) < *(t3+i))
            srednia = *(t2+i);
        if(*(t2+i) < srednia && *(t2+i) > *(t3+i))
            srednia=*(t2+i);

        if(*(t3+i) > srednia && *(t3+i) < *(t2+i))
            srednia = *(t3+i);
        if(*(t3+i) < srednia && *(t3+i) > *(t2+i))
            srednia=*(t3+i);

    *(t2_2+i) = srednia;
    }
    for (i = 0; i < x; i++)
        printf("%d\t", *(t2_2+i));
}

void fun1(int t1[], int t2[], int t3[], int x)
{
    int i, wieksza, t1_2[x];
    for (int i = 0; i < x; i++)
    {
        wieksza = *(t1+i);
        if(*(t2+i) > wieksza)
            wieksza = *(t2+i);
        if(*(t3+i) > wieksza)
            wieksza = *(t3+i);

    *(t1_2+i) = wieksza;
    }
    for (i = 0; i < x; i++)
        printf("%d\t", *(t1_2+i));
}

void fun3(int t1[], int t2[], int t3[], int x)
{
    int i, mniejsza, t3_2[x];
    for (int i = 0; i < x; i++)
    {
        mniejsza=*(t1+i);
        if(*(t2+i) < mniejsza)
            mniejsza = *(t2+i);
        if(*(t3+i) < mniejsza)
            mniejsza = *(t3+i);

    *(t3_2+i) = mniejsza;
    }
    for (i = 0; i < x; i++)
        printf("%d\t", *(t3_2+i));
}
