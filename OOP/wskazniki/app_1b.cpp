/* C++ - OBJECT ORIENTED PROGRAMMING   
	WSKAŹNIKI (POINTERS).	

   © Piotr Siewniak, wersja 30.VIII.2020 r.
*/
#include <iostream>
using namespace std;

int main() {	
	// Deklaracja zmiennej wskaźnikowej (wskaźnika) w_ocena:
	int* w_ocena;	
	
	// Utworzenie zmiennej typu int, wskazywanej przez wskaźnik w_ocena:
	w_ocena = new int;
	/* UWAGA
	 * Pamięć operacyjna dla zmiennej wskazywanej przez wskaźnik w_ocena
	 * została zaalokowana dynamicznie na stercie.
	 */
	
	// Przypisanie zmiennej wartości 4:
	*w_ocena = 4;
	
	cout << "Ocena: "<< *w_ocena << endl;
	
	// Usunięcie zmiennej wskazywanej przez wskaźnik w_ocena:
	delete w_ocena;
		
	return 0;
}
