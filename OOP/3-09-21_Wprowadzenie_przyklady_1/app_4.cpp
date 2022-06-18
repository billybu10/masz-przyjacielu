/* C++ - OBJECT ORIENTED PROGRAMMING   
   Operatory arytmetyczne (arithmetic operators).

   © Piotr Siewniak, wersja 30.VIII.2020 r.
*/
	
#include <iostream>
#include <string>

using namespace std;

main() {			
	int l1{1}, l2{2};
	cout << "Pierwsza liczba: " << l1 << endl;
	cout << "Druga liczba: " << l2 << endl;
		
	cout << "Suma = " << l1 + l2 << endl;
	cout << "Różnica = " << l1 - l2 << endl;
	cout << "Iloczyn = " << l1 * l2 << endl;
	cout << "Iloraz (dzielenie całkowite) = " << l1 / l2 << endl;
	cout << "Iloraz = " << double(l1) / double(l2) << endl; // rzutowanie z typu int na typ double (konwersja jawna)
															// lub 1.0 * l1 / l2 (konwersja niejawna)
	cout << "Reszta z dzielenia całkowitego = " << l1 % l2 << endl;
		
	
	return 0;
}