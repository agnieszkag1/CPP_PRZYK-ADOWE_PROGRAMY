#include <iostream>
#include <cstdlib>
using namespace std;
main()
{
	int a,b,c,d,m; //definicja zmiennej
		
		cout<<"Podaj liczbe a\n";
		cin>>a; //odczyt z klawiatury
	
		cout<<"Podaj liczbe b\n";
		cin>>b; //odczyt z klawiatury
	
		cout<<"Podaj liczbe c\n";
		cin>>c; //odczyt z klawiatury
	 
		cout<<"Podaj liczbe d\n";
		cin>>d; //odczyt z klawiatury
		
			m=a; //zak³adamy, ¿e A jest najwiêksze
			
			if(b<m)
			m=b;
		
			if(c<m)
			m=c;
		
			if(d<m)
			m=d;
			
	cout<<"Najmniejsza liczba to "<<m <<endl;
	
system("pause");
	
}
