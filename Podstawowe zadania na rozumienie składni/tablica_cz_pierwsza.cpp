#include <iostream>
#include <cstdlib>
using namespace std;

void wypelnij (int tab[8])
{
	for (int i=0; i<8; i++)
	{
		cout<<"Podaj wartoœæ elemantu";
		cin>>tab[i];
	}
}

void wyswietl (int tab[8])
{
	for (int i=0;i<8;i++)
	cout<<tab[i]<<" ";
	cout<<endl;
}

main()
{
	int tablica1[8], tablica2[8];
	wypelnij(tablica1);
	wyswietl(tablica1);
	system("pause");
}

