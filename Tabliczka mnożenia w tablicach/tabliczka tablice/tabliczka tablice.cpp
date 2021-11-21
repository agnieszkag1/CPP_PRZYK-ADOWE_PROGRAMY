#include <iostream>
using namespace std;

int main()
{
	cout << "Tabliczka mnożenia: " << endl;

	float tab[10][10];
	float liczba;

	for (int i = 1; i <11; i++) 
	{

		for (int j = 1; j < 11; j++) 
		{

			
			tab[i][j] = j*i;
			if (j*i<10) cout << tab[i][j] <<"  ";
			else  cout << tab[i][j] << " ";


		}
		cout << endl;

	}


	return 0;
}

