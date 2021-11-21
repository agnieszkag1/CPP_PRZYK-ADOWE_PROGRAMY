#include <iostream>
#include <utility>
using namespace std;

class liczba_zespolona {
    float IM;
    float RE;

    

public:

    static int liczba_instancji;

    liczba_zespolona(float a, float b) //wieloarg
    {   IM = a;
        RE = b; 
        liczba_instancji++;
        cout << "Wywolany zostal konstrukor wieloargumentowy" << endl;

    }; 

    liczba_zespolona(float a) //jednoarg
    {
        RE = 0;
        IM = a;
        liczba_instancji++;
        cout << "Wywolany zostal konstrukor jednoargumentowy" << endl;
    }; 
    
    liczba_zespolona(): RE(0), IM(0) //bezarg , wywołanie listą inicjalizacyjna
    {  
        liczba_instancji++;
        cout << "Wywolany zostal konstrukor bezargumentowy" << endl;
    }; 

    liczba_zespolona(const liczba_zespolona& liczba1): RE(liczba1.RE), IM(liczba1.IM)
    {
        liczba_instancji++;
        cout << "Wywolany zostal konstruktor kopiujacy"<<endl;
    };

    ~liczba_zespolona() {
       
        cout << "Liczba zespolona jest usunieta, wywolany zostal destruktor" << endl;
    };

    static int LiczbaInstancji()
    {
        return liczba_instancji;
    }

    float getIM()
    {
        return this->IM;
    }

    float getRE()
    {
        return this->RE;
    }

    float setIM(float liczba)
    {

        if (liczba >= 0)
        {
            this->IM = liczba;
            cout << "Czesc urojona to: " << IM;
            return this->IM;
        }
        else return 0;
    }

    float setRE(float liczba)
    {

        if (liczba >= 0)
        {
            this->RE = liczba;
            cout << "Czesc rzeczywista to: " << IM;
            return this->RE;
        }
        else return 0;

    }
};

int liczba_zespolona::liczba_instancji = 0;

class Tablica
{
    int m_rozmiar;
    int m_wymiar;
    int** m_tablica;
    int m_liczba = 0;

public:
    Tablica(int rozmiar, int wymiar = 2) : m_rozmiar{ rozmiar }, m_wymiar{ wymiar }, m_tablica{ new int* [rozmiar] }
    {
        for (int i = 0; i < m_rozmiar; i++)
            m_tablica[i] = new int[m_wymiar];
    }
    Tablica(Tablica&& tab) : m_rozmiar{ tab.m_rozmiar }, m_wymiar{ tab.m_wymiar }, m_tablica{ new int* [tab.m_rozmiar] }, m_liczba{ tab.m_liczba }
    {
        for (int i = 0; i < m_rozmiar; i++)
        {
            m_tablica[i] = new int[m_wymiar];

            for (int j = 0; j < m_wymiar; j++)
                m_tablica[i][j] = tab.m_tablica[i][j];

            delete[] tab.m_tablica[i];
        }
        delete[] tab.m_tablica;
    }
    ~Tablica()
    {
        for (int i = 0; i < m_rozmiar; i++)
        {
            delete[] m_tablica[i];
        }
        delete[] m_tablica;
    }
    void wstaw(int RE, int IM)
    {
        m_tablica[m_liczba][1] = RE;
        m_tablica[m_liczba][2] = IM;
        m_liczba++;
    }
};

int main()
{
    liczba_zespolona liczba1;
    liczba1.setIM(6); cout << endl;
    liczba1.setIM(9); cout << endl;
    liczba1.getIM(); cout << endl;
    liczba1.getIM(); cout << endl;

    liczba_zespolona liczba2;
    liczba1.setIM(9); cout << endl;
    liczba1.setIM(5); cout << endl;
    liczba1.getIM(); cout << endl;
    liczba1.getIM(); cout << endl;

    liczba_zespolona liczba3(4, 4); cout << endl;
    liczba_zespolona liczba5(4); cout << endl;

    liczba_zespolona liczba4;
    liczba_zespolona liczna6 = liczba2; //konstruktor kopiujący 
    
    cout << "Liczba utworzonych obiektow tej klasy to: " <<liczba_zespolona::LiczbaInstancji() << endl << endl;
}
