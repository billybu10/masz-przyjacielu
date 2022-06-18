/* C++ - OBJECT ORIENTED PROGRAMMING   
   Pętle programowe (loops). Pętla for.

   © Piotr Siewniak, wersja 30.VIII.2020 r.
*/

#include <iostream>

using namespace std;

main() {
	int liczbaPocz = 1;
	int iloscLiczb = 3;
	
	int liczba = liczbaPocz, suma = 0;
	
	for (int i = 1; i <= iloscLiczb; i++) {
		suma += liczba;
		
		liczba++;		
	}
	
	cout << "Suma liczb wynosi " << suma << endl;
	
	return 0;
}