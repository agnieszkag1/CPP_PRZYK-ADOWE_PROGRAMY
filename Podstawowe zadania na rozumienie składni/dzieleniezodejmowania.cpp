#include <iostream>
#include <cstdlib>
using namespace std;
main()
{
	int a,b,i; //definicja zmiennej
	
        cout<<"Podaj dzielna \n";
		cin>>a; //odczyt z klawiatury
		cout<<"Podaj dzielnik \n";
		cin>>b; //odczyt z klawiatury
		i=0;
		
		while (a>=b)
	{
		a=a-b;
		i++;
	}
	
	
		cout<<" twoj wynik to "<<i<< " reszty " <<a<<endl;
		
	system("pause");
	}

