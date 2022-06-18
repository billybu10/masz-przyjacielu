/* C++ - OBJECT ORIENTED PROGRAMMING   
	WSKAŹNIKI (POINTERS).	

   © Piotr Siewniak, wersja 30.VIII.2020 r.
*/
#include <iostream>
using namespace std;

int main() {
	// Deklaracja i inicjacja zmiennej zmienna1 typu int:
	int zmienna1 = 1;	
	
	// Deklaracja wskaźnika o nazwie wskaznik:
	const int* wskaznik;
	
	// Przypisanie wskaźnikowi wskaznik adresu zmiennej o nazwie zmienna1:
	wskaznik = &zmienna1;
	// Odczyt wartości zmiennej wskazywanej przez wskaźnik wskaznik:
	cout << "Wartość zmiennej zmienna1: " << *wskaznik << endl;
	
	// Instrukcja zawarta w komentarzu poniżej jest błędna!
	// *wskaznik = 10; 
	
	
	// Deklaracja i inicjacja zmiennej zmienna2 typu int:
	int zmienna2 = 2;
	
	// Przypisanie wskaźnikowi wskaznik adresu zmiennej zmienna2:
	wskaznik = &zmienna2;
	// Odczyt wartości zmiennej wskazywanej przez wskaźnik wskaznik:
	cout << "Wartość zmiennej zmienna2: " << *wskaznik << endl;
			
	return 0;
}

