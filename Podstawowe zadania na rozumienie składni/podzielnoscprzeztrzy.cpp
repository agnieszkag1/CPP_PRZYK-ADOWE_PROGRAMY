#include <iostream>
#include <cstdlib>
using namespace std;
main()
{
	for(int i=1; i<21; i++)
	{
		
		cout<<"\n";
		cout<<i<<" ";
		if (i%3==0)
		cout<<" liczba jest podzielna przez trzy";
		else
		cout<<" liczba nie jest podzielna przez trzy";
		
	}
	system("pause");
}
