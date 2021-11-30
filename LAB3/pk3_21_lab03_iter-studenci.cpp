// pk3_21_lab03_iter.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <algorithm>
#include <fstream>

using namespace std;

class pojWIERSZ : public string {};
istream& operator>>(std::istream& is, pojWIERSZ& l)
{
	getline(is, l);
	return is;
}

int main()
{

	cout << "PROSZE WPISAC SWOJE IMIE I NAZWISKO " << endl;

		/* ===========================================================================================================
	====================================== ZAD 1 =================================================================
	============================================================================================================*/
	list<int> lista1 = { 1,2,3,4,5,6 };
	cout << "\t\t================== ZAD 1 ==================\n";
	cout << "\ta) Zwykly iterator \n";
	/* Wykorzystując iterator dla lista1 wyświetl jego zawartość od początku do końca */

	//...

	cout << "\n\tb) Odwrotny iterator \n";
	/* Wykorzystując ODWROTNY iterator dla lista1 wyświetl jego zawartość od końca do początku */

	//...


	cout << "\n\tc) Powtorka:\n";
	/* Jeszcze raz wyświetl ostatni wyżej wyświetlony element
	Proszę NIE INICJOWAC NOWEGO iteratora tylko wykorzystać ten z pkt b */
	
	
	//...


	cout << "\n\td) Bazowy:\n";
	/* Stwórz kolejny zwykły iteator i przypisz do niego iterator bazowy dla odwrotnego z pkt c) 
	A następnie wyświetl go  */
	
	//...


	cout << "\n\te) Iterator odwrotny inicjowany iteratorem z pkt d:\n";
	/* Stórz kolejny iterator odwrotny inicjowany iteratorem zwykłym z pkt d) 
	A następnie wyświetl go  */

	//...




	/* ===========================================================================================================
	====================================== ZAD 2 =================================================================
	============================================================================================================*/
	cout << "\n\n\t\t================== ZAD 2 ==================\n";
	/*Prodzę w kolejnych podpunktac do listy lista1 (z zad 1) dodawać (wstawiać) 
	nowe elementy  WYKORZYSTUJAC TYLKO ITERATORY WSTAWIAJACE */


	cout << "a) Wstawianie na poczatek listy\n";
	/*a) Na początek listy wstaw '-2' '-1' '0'. 
	A następnie wyświetl zawartość listy (można przekopiować kod z zad 1 a) */
	
	//...
	
	cout << "\nODP:\n-2 -1 0 1 2 3 4 5 6\n";


	cout << "\n\nb) Wstawianie na koniec listy\n";
	/* b) Na koniec listy wstaw '7' '8' '9'. A następnie wyświetl zawartość (można przekopiować kod z zad 1 a) */

	//...

	cout << "\nODP:\n-2 -1 0 1 2 3 4 5 6 7 8 9\n";


	cout << "\n\nb) Wstawianie w srodek listy\n";
	/* c) Po DRUGIEJ pozycji w liście lista 1 (po elemencie -1) wstaw '100' '200' '300'. 
	A następnie wyświetl zawartość (można przekopiować kod z zad 1 a) */

	//...
	
	cout << "\nODP:\n-2 -1 100 200 300 0 1 2 3 4 5 6 7 8 9\n";





	/* ===============================================================================================
	====================================== ZAD 3 =====================================================
	==================================================================================================*/
	cout << "\n\n\t\t================== ZAD 3 ==================\n";
	/* Stwórz wektor, który będzie zawierał elementy typu string.
	Wykorzystując algorytm copy oraz iteratory strumieniowe, sczytaj z klawiatury kilka wpisanych przez użytkownika wyrazów.
	Podpowiedź: jako trzeci element w algorytmie wykorzystaj back_inserter (do wstawiania do wektora)
	Wczytywanie wyrazów z klawiatury można zatrzymać naciskając np. ctrl + z  */
	
	
	//...


	 /* Następnie posortuj zawartość wektora (algorytm sort)  */
		//...


	/* Na koniec przekopiuj posortowany wektor na wyjście - WYKORZYSTAJ ITERATOR WYJŚCIA
	ROZDZIELAJĄC wyświetlane wyrazy symbolem '*'       */
	//...
	


	/* ===============================================================================================
	====================================== ZAD 4 =====================================================
	==================================================================================================*/
	cout << "\n\n\t\t================== ZAD 4 ==================\n";
	/*Wykorzystujac iteratory strumieniowe wczytawaj po wieszu (linijce) plik "Pomidor.txt".
	Jako elementy wykorzystaj klasę "pojWIERSZ" - zdefiniowaną wyżej
	Wczytane elementy zapisz w nowym pliku, w taki sposób, aby każda wczytana linia w pliku wyjściowym
	była rozdzielona dodatkowa pustą linią - WYKORZYSTAJ ITERATOR WYJŚCIA

	Pomocne:
	ifstream - dla pliku wej
	ofstream - dla pliku wyj
	istream_iterator
	ostream_iterator

	Można wykorzystać algorytm copy (jak w zad 3), ale spóbuj w inny sposób wykorzystać iterator wyjścia
	*/



	//...




}
