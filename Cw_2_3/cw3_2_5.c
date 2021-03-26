#include <stdio.h>
#include <stdlib.h>

int suma(int * a, int * b);
int main(void)
{
 int x, y;
 printf("Podaj 2 liczby:");
 scanf("%d%d", &x, &y);

 printf("x = %d\ny = %d.\n", x, y);

 printf("\nSuma: %d", suma(&x, &y));
 return 0;
}
int suma(int * a, int * b)
{
    return *a + *b;
}
