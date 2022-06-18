/* C++ - OBJECT ORIENTED PROGRAMMING   
	ZMIENNE REFERENCYJNE (REFERENCE VARIABLES).	

   © Piotr Siewniak, wersja 30.VIII.2020 r.
*/
#include <iostream>
#include <string>

using namespace std; 

int main() {	
	// Deklaracja i inicjacja "zwykłej" zmiennej o nazwie typu int:
	int liczba = 1;
	
	// Deklaracja i inicjacja zmiennej referencyjnej (reference variable):
	int& alias_liczba = liczba;
	/* UWAGA
	 * Zmienna referencyjna to inna nazwa - alias - istniejącej zmiennej określonego typu.
	 * Innymi słowy, referencja to odniesienie do istniejącej zmiennej.
	 * 
	 * Zmienna referencyjna musi zostać zainicjowana podczas deklaracji.
	 * 
	 * Powyżej zadeklarowano zmienną referencyjną do typu int i zainicjowano ją 
	 * wartością zmiennej liczba.
	 */
		
	cout << "liczba = " << liczba << endl;
	cout << "alias_liczba = " << alias_liczba << endl;
	cout << endl;
	
	// Zmiana wartości zmiennej liczba:
	liczba++;
	cout << "liczba = " << liczba << endl;
	cout << "alias_liczba = " << alias_liczba << endl;
	cout << endl;
	
	// Zmiana wartości zmiennej referencyjnej alias_liczba:
	alias_liczba++;
	cout << "liczba = " << liczba << endl;
	cout << "alias_liczba = " << alias_liczba << endl;
	cout << endl;
	
	/* UWAGA
	 * Najważniejsze różnice pomiędzy referencją a wskaźnikiem są następujące:
	 * 	1) zmiennej referencyjnej nie można przypisać wartości NULL;
	 * 	2) zmiennej referencyjnej nie można (po zainicjowaniu) przypisać odniesienia
	 * 	   do innej zmiennej;
	 * 	3) zmienne referencyjne muszą być inicjowane podczas deklaracji, a wskaźniki nie muszą.
	 */
	
	
	return 0;
}

