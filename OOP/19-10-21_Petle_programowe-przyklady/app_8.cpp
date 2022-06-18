/* C++ - OBJECT ORIENTED PROGRAMMING   
   Pętle programowe (loops). Pętla while.

   © Piotr Siewniak, wersja 30.VIII.2020 r.
*/

#include <iostream>
using namespace std;

main() {
	double wspolrzedna{0}; // inicjacja zmiennej w stylu C++11
	
	for (int i = 1; i <= 3; i++) {
		cout << "Podaj wartość współrzędnej: ";
		
		do {
			cin >> wspolrzedna;
			if (wspolrzedna < 0) 
				cout << "Błąd! Wprowadź ponownie!" << endl;
		} while (wspolrzedna < 0);
		
		cout << "Wprowadzona wartość współrzędnej: " << wspolrzedna << endl;
	}
	
	return 0;
}