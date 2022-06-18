/* C++ - OBJECT ORIENTED PROGRAMMING   
   Operacje wejścia-wyjścia. Strumienie cin i cout.

   © Piotr Siewniak, wersja 30.VIII.2020 r.
*/
#include <iostream>
#include <string>

// Deklaracja użycia standardowej przestrzeni nazw std:
using namespace std;

int main()
{
	const int p = 1 + 1;
	cout << p << endl;
	string imie, nazwisko;
	
	cout << "Podaj dane pracownika:" << endl;
	cout << "imię = ";
	cin >> imie;
	cout << "nazwisko = ";
	cin >> nazwisko;
	/* UWAGA
	 * Ze względu na fakt, że użycie standardowej przestrzeni nazw std zadeklarowano wcześniej
	 * dla obiektów (strumieni) cin i cout (których nazwy zostały określone w tej przestrzeni)
	 * nie ma potrzeby podawania, gdzie zostały zdefiniowane.
	 */
	
	cout << "\nWprowadzone dane:" << endl;
	cout << imie << " " << nazwisko;
	
	return 0;
}
