#include <iostream>
#include <cstdlib>
using namespace std;
main()
{
	int lekcja;
	cout<<"Ktora godzina lekcyjna siê zaczela?\n\n\n\t";
	cin>>lekcja;
	switch(lekcja)
	
	{
		case 1: cout<<"Masz teraz pierwsz¹ lekcje - Informatyke\n";break;
		case 2: cout<<"Masz teraz druga lekcje - Informatyke\n";break;
		case 3: cout<<"Masz teraz trzecia lekcje - Matematye\n";break;
		case 4: cout<<"Masz teraz czwarta lekcje - Matematyke\n";break;
		case 5: cout<<"Masz teraz piata lekcje - Polski\n";break;
		case 6: cout<<"Masz teraz szosta lekcje - Polski\n";break;
		default:cout<<"Jest juz po lekcjach\n";break;
	}
	system("pause");
}
