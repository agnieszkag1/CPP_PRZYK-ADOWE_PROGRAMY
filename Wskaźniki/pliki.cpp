#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

void zapisz(const string& nazwa, const int& n)
{
    ofstream of (nazwa);

    srand (time(NULL));

    if(of.good())
    {
        for(int i = 0; i < n; i++)
        {
            of << rand() % 100 + 1 << endl;
        }
        of.close();
    }
    else
    {
        cout << "Nie udalo sie." << endl;
    }
}

double srednia(const string& nazwa, const int& n)
{
    ifstream f (nazwa);
    if(f.good())
    {
        int liczba, suma = 0;
        while(f >> liczba)
        {
            cout << liczba << endl;
            suma += liczba;
        }
        cout << endl;
        return 1.0*suma/n;
    }
    else
    {
        cout << "Nie udalo sie." << endl;
    }
}

int main()
{
    cout << "Podaj liczbe n: ";
    int n;
    while(!(cin >> n))
    {
        cout << "Podaj poprawna wartosc: ";
        cin.clear();
        cin.ignore();
    }

    zapisz("plik.txt", n);

    cout << srednia("plik.txt", n);

    return 0;
}
