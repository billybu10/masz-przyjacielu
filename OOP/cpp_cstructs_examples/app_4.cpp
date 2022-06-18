#include <iostream>

// Definicja typu strukturowego (C-struktury) Pracownik:
struct Pracownik {	
	int id;
	char imie[20]; 
	char nazwisko[30]; 	
};

// Prototypy funkcji:
void pobierzDane(Pracownik&); // parametr formalny funkcji przekazywany przez referencję
void wyswietlDane(const Pracownik&); // parametr przekazywany przez referencję do stałej const typu Pracownik

using namespace std;
main() {	
	// Deklaracja zmiennej pracownik należącej do typu strukturowego Pracownik:
	Pracownik pracownik; 	

	cout << "Wprowadź dane wejściowe:" << endl;
	// Wywołanie funkcji pobierzDane():
	pobierzDane(pracownik);
	/* UWAGA
	 * Argumentem wywołania funkcji pobierzDane() jest referencja do zmiennej strukturowej o nazwie pracownik 
 * należącej do typu strukturowego Pracownik.
	 */
		
	cout << "\n\nWprowadzone dane: " << endl;
	// Wywołanie funkcji wyswietlDane():
	wyswietlDane(pracownik);
	/* UWAGA
	 * Argumentem wywołania funkcji wyswietlDane() jest referencja do zmiennej pracownik typu Pracownik,
 *  traktowanej jak stała const.
	 */

	return 0;
}

// Definicje funkcji:
void pobierzDane(Pracownik& p) {
	cout << "numer identyfikacyjny = "; 
cin >> p.id;
	cout << "imię = "; 
cin >> p.imie;
	cout << "nazwisko = "; 
cin >> p.nazwisko;	
}
/* UWAGA
 * Funkcja pobierzDane() posiada jeden parametr formalny, który pełni rolę jej wyjścia.
 * Parametr ten jest przekazywany przez referencję do zmiennej należącej do typu strukturowego Pracownik.
 */
void wyswietlDane(const Pracownik& p) {
	cout << "Nr identyfikacyjny: " << p.id << endl;
	cout << "Imię: " << p.imie << endl;
	cout << "Nazwisko: " << p.nazwisko << endl;
}
/* UWAGA
 * Funkcja wyświetlDane() posiada jeden parametr formalny reprezentujący jej wejście.
 * Parametr ten jest przekazywany jako referencja do stałej const należącej do typu strukturowego Pracownik.
 */
