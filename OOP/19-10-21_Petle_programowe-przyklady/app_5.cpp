/* C++ - OBJECT ORIENTED PROGRAMMING   
   Pętle programowe (loops). Pętla do-while.

   © Piotr Siewniak, wersja 30.VIII.2020 r.
*/

#include <iostream>
using namespace std;

main() {
	int liczbaPocz = 1;
	int liczbaKonc = 3;	
	
	int liczba = liczbaPocz, suma = 0;	
	do {
		suma += liczba;
		
		liczba++;	
	} while (liczba <= liczbaKonc);
	
	cout << "Suma liczb wynosi: " << suma << endl;
	
	return 0;
}