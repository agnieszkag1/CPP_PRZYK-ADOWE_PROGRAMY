#include <iostream>
#include <cstdlib>
using namespace std;

void zamien(int&x,int&y)
{
 	int t=x;
 	x=y;
	y=t;  	
}
main()
{
	int a,b,c;
	cout<<"Podaj a";
	cin>>a;
	cout<<"Podaj b";
	cin>>b;
	cout<<"Podaj c";
	cin>>c;

	if(a>b) zamien(a,b);
	if(a>c) zamien(a,c);
	if(b>c) zamien(b,c);
	
	cout<<"Od najwiêkszej ";
	cout<<a<<endl<<b<<endl<<c<<endl;
	
	system("pause");	
}
