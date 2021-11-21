// Zadanka pętle.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

int main()
{
	int j;
	int tab[10][10];
	
	for (int i = 1; i < 10; i++) {
		for (int j = 0; j < i; j++) {

			tab[i][j] = i * j;
		}
	}

   
}
//  Wypełnić tablicę dwuwymiarową o rozmiarze 10x10 tabliczką mnożenia i wypisać