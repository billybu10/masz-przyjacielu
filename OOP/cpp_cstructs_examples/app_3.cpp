#include <iostream>
#include <string>
using namespace std;

// Definicja typu strukturowego (C-struktury) Pracownik:
struct Pracownik {	
	string imie, nazwisko, stanowisko; 	
};

main() {	
	// Deklaracja wskaźnika wsk, który może wskazywać na zmienne typu strukturowego Pracownik:
	Pracownik *wsk;
	// Utworzenie na stercie struktury typu Pracownik wskazywanej przez wskaźnik wsk:
wsk = new Pracownik;
/* UWAGA
	* Po wykonaniu powyższej instrukcji, w pamięci operacyjnej zostanie utworzona zmienna typu Pracownik.
	* Pamięć dla tej zmiennej została zaalokowana w sposób dynamiczny na stercie.
 	* We wskaźniku wsk pamiętany jest adres początku bloku pamięci, w której przechowywana jest nowoutworzona zmienna.
	*/
	
	// Wprowadzenie wartości pól struktury z klawiatury:
	cout << "Podaj dane pracownika:" << endl;
	cout << "Imię = "; 
	// Odwołanie się do pola (zmiennej członkowskiej) struktury o nazwie imie:
	cin >> wsk->imie;
	/* UWAGA
	 * Odwołanie do pól struktury następuje poprzez wykorzystanie wskaźnika na strukturę, operatora strzałkowego -> 
* i nazwy pola struktury: wskaźnik->nazwa_pola.
	 */
	cout << "Nazwisko = "; 
	cin >> wsk->nazwisko;
	cout << "Stanowisko = "; 
	cin >> wsk->stanowisko;
				
	// Prezentacja danych zapisanych w strukturze:
	cout << "Dane pracownika " << endl;
	cout << "Imię: " << wsk->imie << endl;
	cout << "Nazwisko: " << wsk->nazwisko << endl;
	cout << "Stanowisko: " << wsk->stanowisko << endl;

	// Zwolnienie pamięci zarezerwowanej na stercie dla struktury typu Pracownik, wskazywanej przez wskaźnik wsk:
	delete wsk;
	
	return 0;
}
