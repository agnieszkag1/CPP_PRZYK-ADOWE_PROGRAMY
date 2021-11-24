#include <iostream>
#include <cstdlib>
using namespace std;
main()

{
	int dlugosc; //deklaracja zmiennej
	cout<<"Podaj liczb \n";
	cin>>dlugosc; //pobranie z klawiatury

	if (dlugosc>0)
	{
	   cout<<endl;
	   cout<<"Podales dodatnia liczbe \n"<<endl;
	   cout<<"Dobrze bo to ma byc dlugosc odcinka \n\n";
	}

	else
	{
	  cout<<"Liczba jest ujemna \n";
	  cout<<"Koniec dzialanie programu\n\n";
    }
	  system("pause");
}
