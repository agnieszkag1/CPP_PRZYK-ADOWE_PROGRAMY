#include <iostream>
#include <cstdlib>
using namespace std;
main()
{
	int bok, pole=0; // deklaracja zmiennych
		cout<<"Podaj d�ugosc boku";
		cin>>bok; //odczyt z klawiatury
		pole=bok*bok; //wyliczenie pola
	
	cout<<"Pole kwadratu to "<<pole<<endl; //podanie odpowiedzi
		
			int i=0;
		for (int i=0;i<bok;i++) //i - aktualny rz�d
		{
			int j=0; //bok to ilo�� gwiazdek w rz�dzie
		for (;j<bok;j++)//j - aktualna gwiazdka w rz�dzie
		
		{
			cout<<"* ";
		}
		cout<<"\n";
	}
	system ("pause");

	}
	
