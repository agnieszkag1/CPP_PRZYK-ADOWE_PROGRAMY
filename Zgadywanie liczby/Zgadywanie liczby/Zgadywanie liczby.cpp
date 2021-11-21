#include <iostream>
#include <windows.h>

using namespace std;

int main()
{

    /*Napisac program zgadujacy wymyslona przez uzytkownika liczbe calkowita.
    a) zakres, z ktorego jest liczba podany przez uzytkownika,
    b) program zadaje wielokrotnie pytanie, czy liczba jest mniejsza od pewnej wartosci k,
    c) w zaleznosci od odpowiedzi („t” „n”), program ustala k dla kolejnego pytania,
    d) po „zgadnieciu” liczby program wyswietla odpowiedni komunikat,
    e) program powinien zadac jak najmniejsza liczbe pytan.*/

    double min, max;
    int srednia;
    char wybieraj;



    cout << "Wymysl sobie jakas liczbe, podaj mi przedzial, do ktorego nalezy, a nastepnie odpowiadaj szczerze na zadane przeze mnie pytania :)" << endl;

    do
    {
        cout << "Podaj poczatek twojego przedzialu min: ";
        cin >> min;
        cout << "Podaj koniec twojego przedzialu max: ";
        cin >> max;

        if (min > max)
        {
            cout << "Twoje minimum musi byc mniejsze od maximum!" << endl;
        }
    } while (min > max);

    cout << "Zebym zgadl podana przez ciebie liczbe, musisz odpowiadac na moje pytania. t odpowiada tak, a n - nie" << endl;

    do
    {
        srednia = (min + max) / 2;

        cout << "Czy twoja liczba jest mniejsza niz " << srednia << "?" << endl;
        cin >> wybieraj;

        if (wybieraj == 't')
        {
            max = srednia;
        }
        else
        {
            min = srednia;
        }
    } while (max - min != 1);

    cout << "Twoja liczba to: " << min;

    return 0;
}