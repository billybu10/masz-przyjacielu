/* C++ - OBJECT ORIENTED PROGRAMMING   
   Pętle programowe (loops). Pętla do-while.

   © Piotr Siewniak, wersja 30.VIII.2020 r.
*/

#include <iostream>
#include <string>

using namespace std;

main() {
	int liczbaPocz = 1;
	int liczbaKonc = 3;
	
	int n = liczbaKonc - liczbaPocz + 1; // ilość liczb
	
	int liczba = liczbaPocz, suma = 0;
	int i = 1;
	do {
		suma += liczba;
		
		liczba++;
		i++;
	} while (i <= n);
	
	cout << "Suma liczb wynosi: " << suma << endl;
	
	return 0;
}