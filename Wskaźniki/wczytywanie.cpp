#include <iostream>

using namespace std;

int main()
{
    cout << "Podaj liczbe a: ";
    int a, b;
    while(!(cin >> a))
    {
        cin.clear();
        cin.sync();
        cout << "Podaj prawidlowa wartosc: ";
    }
    cout << "Podaj liczbe b: ";
    while(!(cin >> b))
    {
        cin.clear();
        cin.sync();
        cout << "Podaj prawidlowa wartosc: ";
    }

    cout << "Wynik: " << a*b;

    return 0;
}
