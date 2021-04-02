#include <stdio.h>
#include <stdlib.h>

void fun1();
void fun2();

int main()
{
    int i, n;
    printf("Podaj liczbe komorek tablicy: ");
    scanf("%d", &n);

    int tab1[n];
    int tab2[n];
    int tab3[2*n];

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


    return 0;
}



void fun1(int t1[], int t2[], int t3[], int x)
{
    int i;
    for (int i = 0; i < x; i++)
        {*(t3+i)=*(t1+i);}

    for (int i = x; i < 2*x; i++)
        {*(t3+i)=*(t2+i-x);}

    for (i = 0; i < 2*x; i++)
        {printf("%d\t", *(t3+i));}
}

void fun2(int t1[], int t2[], int t3[], int x)
{
    int i, y=0;
    for (int i = 0; i < 2*x; i++)
    {
        if(i%2 != 0)
        {
            *(t3+i)=*(t1+y);
            y++;
        }
    }

    y = 0;
    for (int i = 0; i < 2*x; i++)
    {
        if(i%2 == 0)
        {
            *(t3+i)=*(t2+y);
            y++;
        }
    }
    for (i = 0; i < 2*x; i++)
        printf("%d\t", *(t3+i));
}
