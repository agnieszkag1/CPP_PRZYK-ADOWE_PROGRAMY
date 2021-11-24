#include <iostream>
#include <cstdlib>
using namespace std;

void szlaczek (char a,char b)
{
	for (int j=0; j<15; j++){
	cout<<a;
	cout<<b;}
}
main()

{
 	  char a,b;
	  	   cout<<"Podaj dwa dowolne znaki";
	  	   cin>>a;
	  	   cin>>b;
		   szlaczek(a,b);
		   cout<<"\n\n"; 
		   system("pause");
}

