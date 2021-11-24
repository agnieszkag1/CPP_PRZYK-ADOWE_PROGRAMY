#include <iostream>
#include <cstdlib>
using namespace std;
main()
{
	int a,b,srodek;
	cout<<"Podaj a";
	cin>>a;
	cout<<"Podaj b";
	cin>>b;
	
	if(a%2==0)
	{
		cout<<"Nie da siê zrobiæ koperty";
		exit(0);
	}
	
	srodek=a/2+1;
	
	for(int z; z<=b;z++)
	{
		for(int i=1;i<=a;i++)
		{
			if(z==1 || z==b) cout<<" *";
			else if(i==1 || i==a)  cout<<" *";
			else if(i<=srodek && z==i)  cout<<" *";
			else if(i>srodek && i==a-z+1)  cout<<" *";
			else cout<<"  ";
			
		}
		cout<<endl;
		
	}
	system("pause");
}
	
	
	
