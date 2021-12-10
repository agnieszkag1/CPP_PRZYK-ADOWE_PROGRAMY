// pk3_21_lab04_kontenery.cpp : 
// Autor: dr inż. Jolanta Kawulok
// ver 2

#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <algorithm>
#include <fstream>
#include <deque>
#include <forward_list>
#include <chrono>       // std::chrono::system_clock
#include <ctime>

#include <stack>
#include <queue>
#include <map>
#include <set>
#include <unordered_map>

////




using namespace std;

int main()
{
	/* Mierzenie czasu na podstawie
	https://bulldogjob.pl/news/1474-jak-mierzyc-czas-wykonania-programu-w-c-c  	*/

	int Uruchomzad = 4; // nr zad 1-4 do uruchomienia


		// OPIS DOSTEPNYCH KONTENEROW:
		// https://en.cppreference.com/w/cpp/container
		// https://www.cplusplus.com/reference/stl/

	if (Uruchomzad == 1) {
		/* +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
		 ++++++++++++++++++++ zad 1 ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
		++++++++	Porówywanie czasu wstawiania do kontenerów oraz dostepu do danych	++++++++++++++++++++++
		+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */

		int poj = 1000;
		int a = 800, b = 900; // dane do spr zawartosci kontenerow
		//int a = 8, b = 9; // prosze spr dla dwoch zestawów



		/* W ćwiczeniu będziemy tworzyć tablicę wielkości poj x poj, zawierającą tabliczkę mnożenia.
		W tym celu należy wykorzystać 4 rodzaje kontnerów:
		a) wektor wektorow typu int
		b) deque deque typu int
		c) liste list typu int
		d) forward_list  forward_list   typu int    */


		/* 1.1 Proszę zmierzyc czas tworzenia wyzej wymienionych obiektow.
		a) Czy jest roznica w czasie tworzenia kontenra,
		jesli dla vector i deque bedziemy wykorzystywac push_back,
		a jesli z góry ustaloną wartość ? */




		/* ===============================================================================================
		===========================  vector =============================================================
		=================================================================================================== */
		auto begin = std::chrono::high_resolution_clock::now();
		cout << "\nTworzenie wektora\n";


		/*vector<vector<int>> vector_zad1(poj);

		for (int i = 0; i < poj; i++)
		{
			for (int j = 0; j < poj; j++)
			{
				vector_zad1[i].emplace_back((i + 1) * (j + 1));
				//cout << vector_zad1[i][j]<<"  ";
			}
			//cout << endl;
		}*/

		vector<vector<int>> vector_zad1;
		for (int i = 0; i < poj; i++)
		{
			vector<int> tmp;
			for (int j = 0; j < poj; j++)
			{
				tmp.emplace_back((i + 1) * (j + 1));
			}
			vector_zad1.emplace_back(tmp);
		}


		auto end = std::chrono::high_resolution_clock::now();
		auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
		printf("Czas wstawiania do wektora: %.6f s.\n", elapsed.count() * 1e-9);



		/* ================================================================================================
		===========================  DEQUE ================================================================
		=================================================================================================== */
		begin = std::chrono::high_resolution_clock::now();
		cout << "\nTworzenie deque\n";


		/*deque<deque<int>> deque_zad1(poj);
		for (int i = 0; i < poj; i++)
		{
			for (int j = 0; j < poj; j++)
			{
				deque_zad1[i].emplace_back((i + 1) * (j + 1));
				//cout << deque_zad1[i][j]<<"  ";
			}
			//cout << endl;
		*/

		deque<deque<int>> deque_zad1;
		for (int i = 0; i < poj; i++)
		{
			deque<int> tmp;
			for (int j = 0; j < poj; j++)
			{
				tmp.emplace_back((i + 1) * (j + 1));
			}
			deque_zad1.emplace_back(tmp);
		}

		end = std::chrono::high_resolution_clock::now();
		elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
		printf("Czas wstawiania do deque: %.6f s.\n", elapsed.count() * 1e-9);


		/*   ================================================================================================
			===========================  list ================================================================
			================================================================================================= */
		begin = std::chrono::high_resolution_clock::now();
		cout << "\nTworzenie LIST\n";

		list<list<int>> list_zad1;
		for (int i = 0; i < poj; i++)
		{
			list<int> tmp;
			for (int j = 0; j < poj; j++)
			{
				tmp.emplace_back((i + 1) * (j + 1));
			}
			list_zad1.emplace_back(tmp);
		}

		// Stop measuring time and calculate the elapsed time
		end = std::chrono::high_resolution_clock::now();
		elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
		printf("Czas wstawiania do list: %.6f s.\n", elapsed.count() * 1e-9);






		/*   ==============================================================================================
		===========================  forward_list =========================================================
		==================================================================================================== */
		begin = std::chrono::high_resolution_clock::now();
		cout << "\nTworzenie forward_list\n";


		forward_list<forward_list<int>> listf_zad1;
		for (int i = poj; i > 0; i--)
		{
			forward_list<int> tmp;
			for (int j = poj; j > 0; j--)
			{
				tmp.push_front(i * j);
			}
			listf_zad1.push_front(tmp);
		}

		end = std::chrono::high_resolution_clock::now();
		elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
		printf("Czas wstawiania do forward_list: %.3f s.\n", elapsed.count() * 1e-9);



		/*   =============================================================================================
		1.2 Proszę odczytac wartosci z tabeli dla par a i b (czyli wynikiem jest a*b)
		Dla list i forward_list prosze dodatkowo zmierzyc czas.
		Proszę zwrócić uwagę na różnice czasowe przy wykorzystaniu innych wartości a i b
		(zdefiniowanych na początku zad 1).
		 ================================================================================================= */
		cout << "\n\n\tOdczyt z kontenerow: \n";
		cout << "\nVEC: ";
		cout << vector_zad1[a-1][b-1];
		cout << "\nDEQ: ";
		cout << deque_zad1[a-1][b-1];


		/*   ============================================================================================
		===========================  list ===============================================================
		==============================================================================================*/
		begin = std::chrono::high_resolution_clock::now();
		cout << endl;
		cout << "\nlist: ";
		auto ite = list_zad1.begin();

		advance(ite, a-1);
		auto ite2=(*ite).begin();
		advance(ite2, b-1);
		cout << *ite2;


		// Stop measuring time and calculate the elapsed time
		end = std::chrono::high_resolution_clock::now();
		elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
		printf("\nCzas odczytu z list: %.6f s.\n", elapsed.count() * 1e-9);


		/*   ============================================================================================
		===========================  forward_list =======================================================
		=============================================================================================== */
		begin = std::chrono::high_resolution_clock::now();

		cout << "\nforward: ";
		auto ite3 = listf_zad1.begin();

		advance(ite3, a - 1);
		auto ite4 = (*ite3).begin();
		advance(ite4, b - 1);
		cout << *ite4;

		end = std::chrono::high_resolution_clock::now();
		elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
		printf("\nCzas odczytu z forward_list: %.6f s.\n", elapsed.count() * 1e-9);


	}






	if (Uruchomzad == 2) {
		/* +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
			++++++++++++++++++++ zad 2 +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
			++++++++++++++++++++++++++++++++ ADAPTORY ++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */

			/* Prosze stworzyc 3 rodzaje adaptorów typu int:
			stack, queue, priority_queue
			do których prosze dodawac pokolei dane z myvec
			(dla priority_queue definicja prorytetu nie ma znaczenia).
			A następnie prosze wyswietlic zawartosci tych obiektów      */


		vector<int> myvec = { 1 ,10 ,2 ,20, 3, 30 };

		stack<int> stos;

		for (int i = 0; i < myvec.size(); i++)
		{
			stos.emplace(myvec[i]);
		}


		cout << "Wyswietlanie stosu \n";
	
		for (int i = 0; i < myvec.size(); i++)
		{
			cout<<stos.top()<<" ";
			stos.pop();
		}
		cout << endl <<endl;


		queue<int> kolejka;

		for (int i = 0; i < myvec.size(); i++)
		{
			kolejka.emplace(myvec[i]);
		}

		cout << "Wyswietlanie kolejki \n";

		for (int i = 0; i < myvec.size(); i++)
		{
			cout << kolejka.front() << " ";
			kolejka.pop();
		}
		cout << endl << endl;
		
	

		priority_queue<int> priorytetowa;
		for (int i = 0; i < myvec.size(); i++)
		{
			priorytetowa.emplace(myvec[i]);
		}

		cout << "Wyswietlanie kolejki priorytetowej \n";
		for (int i = 0; i < myvec.size(); i++)
		{
			cout << priorytetowa.top() << " ";
			priorytetowa.pop();
		}
		cout << endl << endl;

		


	}









	if (Uruchomzad == 3) {
		/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
		 ++++++++++++++++++++ zad 3 ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
		++++++++++++++++++++++++++++++++ Kontenery asocjacyjne  ++++++++++++++++++++++++++++++++++++++++ */

		vector<int> vec3 = { 1,2,3,4,5,5,4,3,2,1,0,10,11,12,13,14,15,-1,-2,-3,-4,-5,15,14,13,12,11,10 };

		/* zad 3.1 Proszę stworzyc obiekt typu set, multiset, map oraz multimap typu int,
		a następnie (dla dwóch pierwszych) dodać do nich zawartość wektora vec3.
		Dla map proszę wstawiać rowniez zawartość wektora, przy czym kluczem niech będzie wartość
		bewzględna danego elmentu (mozna wykorzystać abs i pair).
		Dodawanie do 4 kontenetow można wykonac w 1 pętli.		*/


		/* Nastepnie proszę wyswietlic zawartosc tych 4 obiektow.*/

		map<int, int> mapa;
		multimap<int, int> multimapa;

		set<int> seet;
		multiset<int> multiseet;

		for(int i=0; i<vec3.size(); i++)
		{
			seet.emplace(vec3[i]);
			multiseet.emplace(vec3[i]);

			mapa[abs(vec3[i])] = vec3[i];
			multimapa.emplace(make_pair(abs(vec3[i]), vec3[i]));
		}


		cout << "\nZAWARTOSC set\n";
		copy(seet.begin(), seet.end(), ostream_iterator<int>(cout," "));

		cout << "\n\nZAWARTOSC multiset\n";

		copy(multiseet.begin(), multiseet.end(), ostream_iterator<int>(cout, " "));

		cout << "\n\nZAWARTOSC map\n";
		for(auto x:mapa)
		{
			cout << x.first << " " << x.second << endl;
		}

		cout << "\n\nZAWARTOSC multimap\n";

		for (auto x : multimapa)
		{
			cout << x.first << " " << x.second << endl;
		}





		/* =====================================================================
		===================== zad 3.1 ==========================================
		Dla MULTIMAP proszę usunąć WSZYSTKIE elementy gdzie klucz wynosi 2     */

		for (auto it = multimapa.begin(); it != multimapa.end(); ) {
			if (it->first == 2)
				it = multimapa.erase(it);
			else
				++it;
		}


		cout << "\n\nZAD 3.1 multimap po usunieciu 2\n";

		for (auto x : multimapa)
		{
			cout << x.first << " " << x.second << endl;
		}



		/* =====================================================================
		===================== zad 3.2 ==========================================
			 Proszę swtorzyć inną zwykłą mapę (nie multi),
			 a następnie przepisać z wyzej stworzonej multimapy zawartość tak, aby:
			 klucze były niemniejsze niż 10 oraz
			 klucze byly mniejsze od 14.
			 Wykorzystaj do samego przepisania TYLKO 1 linię kodu
			 (BEZ PETLI).


			 Natępnie prosze wyswietlic tę nową mapę. */

		map<int, int> nowa_mapa;
		copy_if(multimapa.begin(), multimapa.end(), inserter(nowa_mapa, nowa_mapa.end()), [](pair<int, int>x) {if ((x.first >= 10) && (x.first < 14)) return 1; else return 0;  });

		cout << "\n\nZAD 3.2 Nowa mapa na podstawie multimapy \n";

		for (auto x : nowa_mapa)
		{
			cout << x.first << " " << x.second << endl;
		}
	}


	if (Uruchomzad == 4) {
		/* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
		 ++++++++++++++++++++ zad 4 ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
		++++++++++++++++++++++++++++++++ unordered_map  +++++++++++++++++++++++++++++++++++++++++++++++ */

		/* Stworz unordered_map<string, string>, a nastepnie wstaw do niego dowolne pary wyrazow.
		Nastepnie sprawdz, co pod dwoma wybranymi kluczami sie znajduje.
		Niech jeden z kluczy rzeczywiscie znajduje sie w bazie
		(wtedy prosze wyswietlic ten element),
		a niech drugiego klucza nie ma
		(wtedy prosze wyswietlic informacje, ze nie znaleziono danego klucza w mapie). */

		unordered_map<string, string> niekolejna {
		{"słoń","królik"},
		{"krufka","pjesek"},
		{"milka","czekolada"},
		{"łysy","kotek"}
		};
		string klucz;

		klucz = "słoń";

		if (niekolejna.count(klucz) > 0)
		{
			cout << niekolejna["słoń"];
		}
		else cout << "NIE ISTNIEJE TAKI KLUCZ, MASZ PECHA ; (";

		cout << endl;

		klucz = "miś";

		if (niekolejna.count(klucz) > 0)
		{
			cout << niekolejna["słoń"];
		}
		else cout << "NIE ISTNIEJE TAKI KLUCZ, MASZ PECHA ; (";


	}

	return 0;
}

