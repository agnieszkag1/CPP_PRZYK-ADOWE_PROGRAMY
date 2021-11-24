#include <iostream>
#include <cstdlib>
using namespace std;
main()
{
	int bok, pole=0; // deklaracja zmiennych
		cout<<"Podaj d³ugosc boku";
		cin>>bok; //odczyt z klawiatury
		pole=bok*bok; //wyliczenie pola
	
	cout<<"Pole kwadratu to "<<pole<<endl; //podanie odpowiedzi
		
			int i=0;
		for (int i=0;i<bok;i++) //i - aktualny rz¹d
		{
			int j=0; //bok to iloœæ gwiazdek w rzêdzie
		for (;j<bok;j++)//j - aktualna gwiazdka w rzêdzie
		
		{
			cout<<"* ";
		}
		cout<<"\n";
	}
	system ("pause");

	}
	
