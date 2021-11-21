// zadanka.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;
 main()
{
	char u;
	float min, max, średnia, ile=0, liczba, suma=0,a;

	cout << "Wprowadź liczbę: " << endl;
	cin >> a;
	max = a;
	min = a;
	ile++;
	suma = a;
	średnia = a;

	cout << "Czy chcesz podać liczbę? T (tak) / N (nie) ";
	cin >> u; 
	if (u == 't' or u == 'T') {
		do {
			cout << "Wprowadź liczbę: " << endl;
			cin >> liczba;
			ile++;
			if (liczba < min) min = liczba;
			if (liczba > max) max = liczba;
			suma = suma + liczba;
			średnia = suma / ile;


			cout << "Czy chcesz podać liczbę? T (tak) / N (nie) ";
			cin >> u;
		} while (u == 'T' or u == 't');
	}
	
	cout << "To jest średnia: " << średnia << endl;
	cout << "To jest minimum: " << min << endl;
	cout << "To jest maksimum: " << max << endl;
	return 0;
} 




