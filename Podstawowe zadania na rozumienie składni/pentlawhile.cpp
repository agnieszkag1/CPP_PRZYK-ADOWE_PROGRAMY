#include <iostream>
#include <cstdlib>
using namespace std;
main()
{
	char znak;
	cout<<"podaj znak: ";
	cin>>znak;
	while (znak!='k')
	{
		cout<<"Podaj kolejny znak: ";
		cin>>znak;
	}
	cout<<"Podales "<<znak<< " wiec koncze program";
	system("pause");
}
