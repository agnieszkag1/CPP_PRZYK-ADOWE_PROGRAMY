#include <iostream>
#include <cstdlib>
using namespace std;
	int a,r;
void wypelnij (float tab[4][4])
{

	for (int i=0; i<4; i++)
	{
		for(int j=0; j<4;j++)
		{
				tab[i][j]=a;
				a=a+r;
		}
	}
}


 void wyswietl (float tab[4][4])
 {
 	int sum=0;
 for (int i=0; i<4; i++)
	{
		for(int j=0; j<4;j++)
		{
				cout<<tab[i][j]<<",";
			}
			cout<<endl;
	}

 for(int k=0; k<4; k++)
{
	for(int o=0; o<4; o++)
{
		
			
			
		if((int)tab[k][o] % 2 != 0 )
		{
		cout<<tab[k][o]<<" +";
		sum=tab[k][o]+sum;}
	}
	
}

	cout<<endl<<sum<<" to jest wynik";
}

main()
{
	cout<<"Podaj liczbe a";
	cin>>a;
	cout<<"Podaj r";
	cin>>r;

		   float tab1[4][4];
		   wypelnij(tab1);
		   cout<<endl;
		   
		   wyswietl(tab1);
		   
		   
	system("pause");
}

