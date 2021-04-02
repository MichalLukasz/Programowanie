#include <stdio.h>
#include <stdlib.h>

void kopia();
void kopia_odw();

int main()
{
    int i, n;
    printf("Podaj liczbe komorek tablicy: ");
    scanf("%d", &n);

    int tab1[n];
    int tab2[n];

    printf("Podaj n liczb:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &tab1[i]);

    for (i = 0; i < n; i++)
        printf("%d\t", *(tab1+i));

    printf("\n\nKopia tablicy: \n");
    kopia(tab1, tab2, n);

    printf("\n\nTablica odwrocona: \n");
    kopia_odw(tab1, tab2, n);


    return 0;
}



void kopia_odw(int t1[], int t2[], int x)
{
    int i;
    for (int i = 0; i < x; i++)
        *(t2+i)=*(t1+x-1-i);

    for (i = 0; i < x; i++)
        printf("%d\t", *(t2+i));
}

void kopia(int t1[], int t2[], int x)
{
    int i;
    for (int i = 0; i < x; i++)
        *(t2+i)=*(t1+i);

    for (i = 0; i < x; i++)
        printf("%d\t", *(t2+i));
}
