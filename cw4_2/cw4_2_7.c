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

    for (i = 0; i < n; i++)
        printf("%d\t", *(tab1+i));

    printf("\n");

    for (i = 0; i < n; i++)
        printf("%d\t", *(tab2+i));

    printf("\n\na: \n");
    fun1(tab1, tab2, tab3, n);

    printf("\n\nb: \n");
    fun2(tab1, tab2, tab3, n);

    printf("\n\nc: \n");
    fun3(tab1, tab2, tab3, n);


    return 0;
}



void fun1(int t1[], int t2[], int t3[], int x)
{
    int i;
    for (int i = 0; i < x; i++)
        *(t3+i)=*(t1+i) + *(t2+i);

    for (i = 0; i < x; i++)
        printf("%d\t", *(t3+i));
}

void fun2(int t1[], int t2[], int t3[], int x)
{
    int i, wieksza;
    for (int i = 0; i < x; i++)
    {
        wieksza=*(t1+i);
        if(*(t2+i)>wieksza)
            wieksza=*(t2+i);

    *(t3+i) = wieksza;
    }
    for (i = 0; i < x; i++)
        printf("%d\t", *(t3+i));
}

void fun3(int t1[], int t2[], int t3[], int x)
{
    int i;
    for (int i = 0; i < x; i++)
        *(t2+i)=*(t1+i);
    for (int i = 0; i < x; i++)
        *(t3+i)=*(t2+i);
    for (int i = 0; i < x; i++)
        *(t1+i)=*(t3+i);

    for (i = 0; i < x; i++)
        printf("%d\t", *(t1+i));
}
