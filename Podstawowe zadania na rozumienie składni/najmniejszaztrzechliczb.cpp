#include <iostream>
#include <cstdlib>
using namespace std;
main()
{
	int a; //deklaracja zmiennych
	cout<<"Podaj liczbe a \n";
	cin>> a; //pobranie z klawiatury
	int b; //deklaracja zmiennych
	cout<<"Podaj liczbe b \n";
	cin>> b; //pobranie z klawiatury
	int c; //deklaracja zmiennych
	cout<<"Podaj liczbe c \n";
	cin>> c; //pobranie z klawiatury
	
		  if(a<b)
			  {
			  	if(a<c)
			  	cout<<"liczba a jest najmniejsza\n";
			  	  else
			  	  cout<<"liczba c jest najmniejsza\n";
			  }
	   	  if(b<a)
			   	{
			  	if(b<c)
	  	        cout<<"liczba b jest najmniejsza\n";
			  	  else
			  	  cout<<"liczba c jest najmniejsza\n";
			  }
		  
	system("pause");
}

