/* C++ - OBJECT ORIENTED PROGRAMMING   
	WSKAŹNIKI (POINTERS).	

   © Piotr Siewniak, wersja 30.VIII.2020 r.
*/
#include <iostream>
using namespace std;

int main() {	
	// Deklaracja zmiennej wskaźnikowej (wskaźnika) w_ocena:
	void* wskaznik = NULL;	
	
	wskaznik = new int;
	*wskaznik = 1;
	cout << "Wartość liczby całkowitej: "<< *wskaznik << endl;
	delete wskaznik;
	
	wskaznik = new double(1.5);
	cout << "Wartość liczby rzeczywistej: "<< *wskaznik << endl;
	delete wskaznik;
		
		
	return 0;
}
