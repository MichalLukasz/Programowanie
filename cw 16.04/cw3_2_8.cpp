#include <iostream>

using namespace std;

void zamiana(int &a, int *b);

int main()
{
    int x, y;

    cout << "Podaj 2 liczby:" << endl;
    cin >> x >> y;
    cout << x << " " << y << endl;

    zamiana(x, &y);

    cout << "Po zamianie:\n" << x << " " << y << endl;

    return 0;
}


void zamiana(int &a, int *b)
{
    int c = a;
    a = *b;
    *b = c;
}
