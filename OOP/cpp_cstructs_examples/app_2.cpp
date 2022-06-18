#include <iostream>
using namespace std;

// Definicja typu strukturowego (C-struktury) Pracownik:
struct Pracownik {	
	char imie[20]; 
	char nazwisko[20];  
	char stanowisko[30]; 
};

main() {	
	// Deklaracja i inicjalizacja zmiennej strukturowej pracownik typu Pracownik:
	Pracownik pracownik = {"Jan", "Kowalski", "dyrektor"}; 
// Deklaracja i inicjalizacja wskaźnika wsk:
	Pracownik *wsk = &pracownik;
	/* UWAGA
	 * Po wykonaniu instrukcji powyżej wskaźnik wsk wskazuje na strukturę pracownik należącą do typu Pracownik.
	 */

	cout << "Dane pracownika " << endl;
	cout << "Imię: " << (*wsk).imie << endl;
	cout << "Nazwisko: " << (*wsk).nazwisko << endl;
	cout << "Stanowisko: " << (*wsk).stanowisko << endl;	
	/* UWAGA
	* Odwołanie się do poszczególnych pól struktury pracownik jest realizowane za pomocą nazwy tego pola (np. imie, nazwisko)
 *  oraz operatora dereferencji i wskaźnika: *wsk.
	*/
	return 0;
}
