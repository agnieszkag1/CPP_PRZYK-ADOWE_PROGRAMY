#include <iostream>
#include <cstdlib>
using namespace std;

float max (float a, float b, float c)
{
	float m=a;
	if(b>m)
	m=b;
	if(c>m)
	m=c;
	return m;	
}
main()
{
	float a,b,c;
	cout<<"Podaj a";
	cin>>a;
	cout<<"Podaj b";
	cin>>b;
	cout<<"Podaj c";
	cin>>c;
	
	cout<<"Najwiêksza liczba to ";
	cout<<max(a,b,c);
	
	system("pause");	
}
