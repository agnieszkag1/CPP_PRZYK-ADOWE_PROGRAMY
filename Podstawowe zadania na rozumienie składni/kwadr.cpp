#include <iostream>
#include <cstdlib>
using namespace std;
main()
{
	int bok;
	cout<<"Podaj d³ugoœæ boku";
	cin>>bok;
	
	for (int a=0; a<bok; a++)
	{
		cout<<"* ";}
		cout<<"\n";
		for (int b=0; b<bok-2; b++){
			cout<<"*";
			for (int c=0; c<bok-2; c++){
		cout<<"  ";}
		cout<<" * ";
		cout<<"\n";
		}
		for (int a=0; a<bok; a++)
	{
		cout<<"* ";}
	
		
		system("pause");
	}
