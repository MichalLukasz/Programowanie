#include <stdio.h>
#include <stdlib.h>

void zamiana(int * a, int * b);
int main(void)
{
 int x, y;
 printf("Podaj 2 liczby:");
 scanf("%d%d", &x, &y);

 printf("x = %d\ny = %d.\n", x, y);

 zamiana(&x, &y);

 printf("\nPo zamianie:\nx = %d\ny = %d.\n", x, y);
 return 0;
}
void zamiana(int * a, int * b)
{
 int c;
 if(*b < *a)
    {
    c = *a;
    *a = *b;
    *b = c;
    }
}
