/*ZAD 1. SZABLON KLASY - GOTOWE
 *
-->  Stwórz szablon klasy, który będzie przechowywał tablicę dynamiczną dowolnego typu (tak jak na lab. 1)
		Niech pojemność ma typ long long int. Zmienna informująca o zapełnieniu nie jest potrzebna.

-->  W konstruktorze jedno argumentowym deklarujemy dynamiczną tablicę o wybranej pojemności.
		Proszę sprawdzać, czy jest możliwa alokacja pamięci, w przeciwnym razie proszę wyrzucić wyjątek.

-->  Proszę pamiętać o destruktorze.

-->  Dla Konstruktora i destruktora dopisz meldunki, które będą informowały o ich uruchomieniu np. cout << "Konstr CPojemnik\n"; cout << "Destr CPojemnik\n";

-->  Niech klasa posiada metodę wstaw, która wstawia element na wybraną pozycję w razie wyjścia poza zakres proszę zwrócić wyjątek.

-->  Niech klasa posiada metodę zwróć, która zwraca element z wybranej pozycji w razie wyjścia poza zakres, proszę zwrócić wyjątek


ZAD 2. WZORZEC SINGLETON

-->  Proszę stworzyć klasę/wzorzec singleton. Klasa ta niech umożliwia zapis do pliku. Nazwa pliku może być z óry ustalona w klasie.

-->  W konstruktorze plik jest otwierany, a w destruktorze zamykany. Niech oba zawierają meldunki w momencie wywołania (jak w zad 1).

-->  Proszę dodać przeciążony operator << (wykorzystanie szablonu) lub metodę (np. write) umożliwiający zapis do pliku wybranego elementy ZAD

ZAD 3. W MAIN

-->  Spróbuj stworzyć dwie zmienne klasy z zad1 przechowujące char i double.

	Jako pojemność tablic proszę sprawdzić:
	
	unsigned long long x = 1000000000000000; // wyrzuca wyjątki w obu tablicach
	x = 1000000000; // dla double wyjatek, dla char działa
	x = 10; // działa dla obu
	
-->  Dla każdego typu wykorzystaj osobny blok try i catch

-->   Czy dla char i double dla tych samych wartości x wyrzucany jest wyjątek? NIE

-->  Dla x=10 proszę wypełnić tablice dowolnymi wartościami, które będą zapisane do pliku wykorzystując utworzony wzorzec projektowy typu singleton z zad 2

-->  Dodatkowo do wybranego pojemnika spróbuj dodać element na pozycję x+2
*/



#include <iostream>
#include <string>
#include <fstream>

using namespace std;

//=============================== ZADANIE 1 ===============================//

template < class T >
class CPojemnik
{
  
    long long int poj;
    T* tab;

public:
    CPojemnik() : poj(0)
    {
    }

    CPojemnik(int poj_) :  poj(poj_)
    {
        tab = new T[poj];
        cout << "Konstr CPojemnik\n";
    }

    ~CPojemnik()
    {
        delete[] tab;
        cout << "Destr CPojemnik\n";
    }

    void wstaw(T a, int i) 
    {
      
        if( i>=poj || i<0){
            throw out_of_range("WYKROCZONO POZA ZAKRES TABLICY");
        }
        else {
            tab[i] = a;
        }
        
    
    }

    T zwroc(int i)
    {

        if (i >= poj || i < 0) {
            throw out_of_range("WYKROCZONO POZA ZAKRES TABLICY");
        }
        else {
            return tab[i];
        }


    }

};

//=============================== ZADANIE 2 ===============================//
class Plik
{

public:
    static Plik& getInstance()
    {
        static Plik inst;
        return inst;

    }

    void Zapis()
    {
        string tmp;
        std::cout<< "\n \n \n Podaj słowa do wpisania do pliku, następnie kliknij ENTER, jeśli chcesz zakończyć to STOP do pustej linijki po enterze";
        while(true){

            getline(cin,tmp);

        	if(tmp=="STOP")
        {
            return;
        }
        else
        {
            plik << tmp << endl;

        }
        }
    } 

    void Zapis(string x)
    {
        plik << x << endl;
    }

private:
    fstream plik;
    string nazwa_pliku_wejsciowego="tekst.txt";

    Plik() //
    {
        std::cout << "Singleton::Singleton()" << std::endl;
        plik.open(nazwa_pliku_wejsciowego);
    }

	Plik(const Plik&) {};
    Plik& operator=(const Plik&) {};

	~Plik() {
        plik.close();
        std::cout << "Plik::~Plik()" << std::endl;
    }
};

int main() {

//=============================== ZADANIE 1 ===============================//

   /* try
    {
        CPojemnik<int> Tab(876);
            Tab.wstaw(900, 600);
           cout<< Tab.zwroc(600)<<endl;
    }
        
        catch (const bad_alloc& oor)
        {
           cerr << "bad_alloc error: " << oor.what() << '\n';
        }
        
        catch (const out_of_range& ouut)
        {
            cerr << "out_of_range error: " << ouut.what() << '\n';
        }

//=============================== ZADANIE 2 ===============================//

        Plik::getInstance().Zapis();

*/

//=============================== ZADANIE 3 ===============================//

        try
        {
            CPojemnik<char> Tab(10);

            for (int i = 0; i < 10; i++)
            {
                Tab.wstaw(i, i);
            };

            for (int i = 0; i < 10; i++)
            {
                Plik::getInstance().Zapis(to_string(Tab.zwroc(i)));
            };

           
           
        }

        catch (const bad_alloc& oor)
        {
            cerr << "bad_alloc error: " << oor.what() << '\n';
        }

        catch (const out_of_range& ouut)
        {
            cerr << "out_of_range error: " << ouut.what() << '\n';
        }
        
        try
        {
            CPojemnik<double> Tab(10);
            Tab.wstaw(12, 10 + 2);
        }

        catch (const bad_alloc& oor)
        {
            cerr << "bad_alloc error: " << oor.what() << '\n';
        }

        catch (const out_of_range& ouut)
        {
            cerr << "out_of_range error: " << ouut.what() << '\n';
        }




	return 0;
};



