#include <iostream>
#include <cstdlib>
using namespace std;
main()
{
	int liczba; //deklaracja zmiennej
	 cout<<"podaj liczbe \n";
	 cin>>liczba; //pobranie z klawiatury
 	if (liczba>0)
	 cout<<"liczba jest dodatnia \n";
	else if(liczba==0)
	 cout<<"Wpisana liczba to zero \n";
	else
	 cout<<"liczba jest ujemna \n";
	system("pause");
}
