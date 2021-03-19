#include <stdio.h>
#include <stdlib.h>

   struct dane {
        char imie[25];
        char imie_2[25];
        char nazwisko[25];
    };
    struct osoba {
        struct dane person;
        char PESEL[11];
    };

void wysw(const struct osoba * wst);

int main()
{
    int i, len;
    struct osoba tabl[3] = {
        {{"Adam", "Rafal", "Niedzwiedz"},
        "98154196418"},
        {{"Beata", "", "Zawojek"},
        "90185451621"},
        {{"Tomasz", "", "Rybacki"},
        "88195465162"},
    };

    wysw(&tabl[0]);
    wysw(&tabl[1]);
    wysw(&tabl[2]);

    return 0;
}

void wysw(const struct osoba * wst)
{   int len;
    len = strlen(wst->person.imie_2);
        printf("%s, ", wst->person.nazwisko);
        printf("%s ", wst->person.imie);
        if(len>0)
            printf("%.1s.", wst->person.imie_2);
        printf("-- %.11s\n", wst->PESEL);
}
