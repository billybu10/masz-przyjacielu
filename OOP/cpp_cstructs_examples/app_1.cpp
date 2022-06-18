#include <iostream>
using namespace std;

// Definicja typu strukturowego (C-struktury) Pracownik:
struct Pracownik {	
	char imie[20]; 
	char nazwisko[20];  
	char stanowisko[30]; 
};

main() {	
	// Deklaracja i inicjacja zmiennej pracownik należącej do typu strukturowego Pracownik:
	Pracownik pracownik = {"Jan", "Kowalski", "dyrektor"}; 
	
	// Deklaracja wskaźnika, który może wskazywać na zmienną typu Pracownik:
	Pracownik *wsk;	
	
	// Przypisanie wskaźnikowi wsk adresu zmiennej strukturowej pracownik:
	wsk = &pracownik;

	// Prezentacja danych zapisanych w strukturze pracownik1:
	cout << "Dane pracownika " << endl;
	cout << "Imię: " << wsk->imie << endl;
	cout << "Nazwisko: " << wsk->nazwisko << endl;
	cout << "Stanowisko: " << wsk->stanowisko << endl;	

	return 0;
}
