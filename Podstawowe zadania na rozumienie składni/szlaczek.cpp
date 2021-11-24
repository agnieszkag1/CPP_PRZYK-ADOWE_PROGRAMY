#include <iostream>
#include <cstdlib>
using namespace std;

void szlaczek_dowolny(int i, char znak)
{
	for (int j=0; j<i; j++)
	cout<<znak<<endl;
}
main()
{
	int a;
	char b;
	cout<<"Podaj liczbe znaków";
	cin>>a;
	cout<<"Podaj znak";
	cin>>b;
	
	szlaczek_dowolny(a,b);
	system("pause");
}
	

