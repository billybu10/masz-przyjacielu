/* C++ - OBJECT ORIENTED PROGRAMMING   
   Pętle programowe (loops). Pętla for.

   © Piotr Siewniak, wersja 30.VIII.2020 r.
*/

#include <iostream>

using namespace std;

main() {
	int liczbaPocz = 1;
	int liczbaKonc = 3;	
	
	int liczba = liczbaPocz, suma = 0;	
	for (;liczba <= liczbaKonc;) {
		suma += liczba;
		
		liczba++;	
	}
	
	cout << "Suma liczb wynosi: " << suma << endl;
	
	return 0;
}