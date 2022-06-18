/* C++ - OBJECT ORIENTED PROGRAMMING   
	WSKAŹNIKI (POINTERS).	

   © Piotr Siewniak, wersja 30.VIII.2020 r.
*/
#include <iostream>
using namespace std;

int main() {	
	int zmienna1 = 1;
	int zmienna2 = 2;
	
	// Deklaracja i inicjacja stałego wskaźnika o nazwie wskaznik:
	int* const wskaznik = &zmienna1;
	
	/* UWAGA
	 * Wskaźnik stały (ang. constant pointer) musi zostać zainicjowany podczas jego deklaracji.
	 * Tutaj: wskaźnikowi wskaznik przypisano adres zmiennej zmienna1.
	 * Wskaźnik wskaznik posiada cechę "tylko do odczytu" (read only) i tym samym
	 * zmiana jego wartości na inną (np. adres innej zmiennej) nie będzie możliwy.
	 */
		
	cout << "Wartość zmiennej zmienna1: " << *wskaznik << endl;
	
	// Modyfikacja wartości zmiennej wskazywanej przez wskaźnik stały:
	*wskaznik++;
	cout << "Zmieniona wartość zmiennej zmienna1: " << *wskaznik << endl;
	
	
	// Instrukcja w komentarzu poniżej jest błędna!
	// wskaznik = &zmienna2;
	
	return 0;
}
