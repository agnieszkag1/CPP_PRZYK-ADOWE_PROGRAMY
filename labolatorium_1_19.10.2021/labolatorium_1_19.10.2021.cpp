// pk3my_21_lab01.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

struct osoba {
	string nazwisko, stanowisko;
	osoba(string a, string b) { nazwisko = a; stanowisko = b; };
	osoba() { nazwisko = ""; stanowisko = ""; }
};

template<typename T>
T maks(T a, T b)
{
    if (a > b)
        return a;
    else
        return b;
}

template<>
const char* maks<const char*>(const char* a, const char* b)
{
    return (strcmp(a, b) > 0) ? a : b;

};

template<class T>
class CPojemnik
{
    int n;
    int poj;
    T* tab;

public:
    CPojemnik() : n(0), poj(0)
    {
    }

    CPojemnik(int poj_) : n(0), poj(poj_)
    {
        tab = new T[poj];
    }

    ~CPojemnik()
    {
        delete[] tab;

    }

    void wstaw(T a, int i) // (miejsce, co chce wstawić)
    {
        if (i >= 0 && i < n)
        {
            
               
            tab[i] = a;
        }
        else
        {
            std::cout << "wartosc poza zakresem" << std::endl;
            return;
        }
    }

    void dodaj(T a)
    {
        if (n<poj)
        {         
                
                tab[n] = a;
                n++;
                return;      
        }

        poj += 3;
        T* tmp = new T[poj];
        for (int i = 0; i < poj - 3; i++)
        {
            tmp[i] = tab[i];
        }
        tmp[poj - 3] = a;
        delete[] tab;
        tab = new T[poj];
        for (int i = 0; i < poj; i++)
        {
            tab[i] = tmp[i];
        }
        n++;
        delete[] tmp;
    }

    void wyswietl()
    {
        for (int i = 0; i < n; i++)
        {
           
            std::cout << tab[i] << std::endl;
        }
    }
};

class CPojemnikD : public CPojemnik<double>
{
    int n;
    int poj;
    double* tab;
    double suma;

public:

    CPojemnikD() : CPojemnik(), suma(0)
    {
    }

    CPojemnikD(int poj_) : CPojemnik(poj_), suma(0)
    {
        tab = new double[poj];
    }

    void dodaj(double a)
    {
        CPojemnik::dodaj(a);
        suma += a;
    }

    double zwrocsuma()
    {
        return suma;
    }

};

template<class T1>
class CPojemnikDopis : public CPojemnikD
{
    int n;
    int poj;
    double* tab;
    double suma;
    T1 opis;
public:
    CPojemnikDopis() : CPojemnikD()
    {
    }

    CPojemnikDopis(int poj_) : CPojemnikD(poj_)
    {
    }

    CPojemnikDopis(T1 opis_) : CPojemnikD()
    {
        opis = opis_;
    }

    CPojemnikDopis(int poj_, T1 opis_) : CPojemnikD(poj_)
    {
        opis = opis_;
    }
};


int main()
{
	cout << "Agnieszka Góral " << endl;

	/* Proszę odkomentować tylko kod z //    */
	cout << "\n\t======== ZAD 1 i 2 ==== \n";


	cout << maks(1, 2) << "\tpoprawna odp: 2" << endl;
	cout << maks(20.2, 2.3) << "\tpoprawna odp: 20.2" << endl;
	cout << maks(-2.2, 2.2) << "\tpoprawna odp: 2.2" << endl;
	cout << maks('c', 'a') << "\tpoprawna odp: c" << endl << endl;
	cout << maks("aaaa", "bz") << "\tpoprawna odp: bz" << endl;
	cout << maks("aa", "az") << "\tpoprawna odp: az" << endl;
	cout << maks("aaaa", "bz") << "\tpoprawna odp: bz" << endl;
	cout << maks("aaaaaaa", "a") << "\tpoprawna odp: aaaaaa" << endl;
	cout << maks("aaz", "zzd") << "\tpoprawna odp: zzd" << endl;




	cout << "\n\n\t======== ZAD 3 ======== \n";
	osoba o1("Kowalski", "kucharz"), o2("Nowak", "kelner"), o3("Adamski", "barman");

	/*Zadeklaruj obiekt mojpoj typu CPojemnik, który pomieści 3 obiekty typu osoba */
	   /* deklaracja mojpoj */
    CPojemnik<osoba> mojpoj(3);
	mojpoj.dodaj(o1);
	mojpoj.dodaj(o2);
	mojpoj.dodaj(o3);
	mojpoj.dodaj(o2);
	 
	cout << "Wstawienie nowej osoby do -1:" << endl;
	mojpoj.wstaw(o1, -1);
	mojpoj.wstaw(o1, 0);


	/*Zadeklaruj obiekt mojpoj2 typu CPojemnik, który pomieści 3 obiekty typu double */
        /* deklaracja mojpoj2 */
    CPojemnik<double> mojpoj2(3);
	mojpoj2.dodaj(0.0);
	mojpoj2.dodaj(1.1);
	mojpoj2.dodaj(200);
	mojpoj2.dodaj(3.3);
	mojpoj2.dodaj(4.4);
	mojpoj2.dodaj(5.5);
	cout << "\nTablica double mojpoj2 (po pierwszym dodawaniu do tablicy) \n";
	mojpoj2.wyswietl();
	mojpoj2.wstaw(2.2, 2);
	cout << "Tablica double mojpoj2 (po wstawieniu na miejsce nr 2)\n";
	mojpoj2.wyswietl();


	cout << "\n\t======== ZAD 4 ======== \n";
	cout << "\nDane dla klasy: CPojemnikD\n";
	/* Zadeklaruj obiekt pojD typu CPojemnikD, który pomieści 3 obiekty. */
	/* deklaracja pojD */
    CPojemnikD pojD(3);
	pojD.dodaj(0);
	pojD.dodaj(10000.1);
	pojD.dodaj(2000.1);
	pojD.dodaj(300.1);
	pojD.dodaj(40.1);
	pojD.dodaj(5.1);
	pojD.wyswietl();
	cout << "Suma: " << pojD.zwrocsuma() << "\tpoprawna odp: 12345.5" << endl;
    CPojemnik<double>* x = new CPojemnikD(1);
    delete x;

    CPojemnikD* x2 = new CPojemnikD(1);



	cout << "\n\t======== ZAD 5 ======== \n";
	/*b) Zadeklaruj obiekt pojDopis typu CPojemnikDopis, który pomieści 3 obiekty, opis jest typu string (np. "jestem lista" )*/
	   /* deklaracja pojDopis */
    CPojemnikDopis<std::string> pojDopis(3, "jestem lista");

	pojDopis.dodaj(123.123);
	cout << "pojDopis" << endl;
	pojDopis.wyswietl();


	/*c) Zadeklaruj obiekt pojDopis2 typu CPojemnikDopis, który pomieści 3 obiekty, opis jest typu osoba  (np. o1)*/

    /* deklaracja pojDopis2 */
   CPojemnikDopis<osoba> pojDopis2 (3, o1);

	pojDopis2.dodaj(-222);
	cout << "\npojDopis2" << endl;
	pojDopis2.wyswietl();


	cout << "\n\t==== Koniec programu ==== \n";
}