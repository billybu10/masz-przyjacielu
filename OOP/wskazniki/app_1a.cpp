/* C++ - OBJECT ORIENTED PROGRAMMING   
	WSKAŹNIKI (POINTERS).	

   © Piotr Siewniak, wersja 30.VIII.2020 r.
*/
#include <iostream>
using namespace std;

int main() {	
	int zmiennaInt = 10;
	cout << "Informacje dotyczące zmiennej zmiennaInt:" << endl;
	cout << "wartość: " << zmiennaInt << endl;
	cout << "rozmiar: " << sizeof(zmiennaInt) << endl;
	cout << "adres: " << &zmiennaInt << endl;
		
	double zmiennaDouble = 1.5;		
	cout << "Informacje dotyczące zmiennej zmiennaDouble:" << endl;
	cout << "wartość: " << zmiennaDouble << endl;
	cout << "rozmiar: " << sizeof(zmiennaDouble) << endl;
	cout << "adres: " << &zmiennaDouble << endl;
	
	return 0;
}
