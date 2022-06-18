/* C++ - OBJECT ORIENTED PROGRAMMING   
   Pętle programowe. Pętla for.
	Instrukcje break, continue.

   © Piotr Siewniak, wersja 30.VIII.2020 r.
*/

#include <iostream>

using namespace std;

main() {
	int liczbaPocz = 2;
	int liczbaKonc = 6;	
	
	int liczba = liczbaPocz-1, suma = 0;	
	for (;;) {
		// Inkrementacja liczby, która jest brana pod uwagę w obliczeniach:
		liczba++;
		
		// Spprawdzenie, czy bieżąca wartość liczby jest większa od zadanej
		// wartości końcowej:
		if (liczba > liczbaKonc) break;
		/* UWAGA
		 * Jeśli bieżąca wartość liczby jest większa od zadanej wartości
		 * końcowej, wówczas pętla kończy działanie.
		 */
		
		// Sprawdzenie, czy bieżąca wartość liczby jest nieparzysta:
		if ((liczba % 2) != 0) continue;
		/* UWAGA
		 * Jeśli bieżąca wartość liczby jest nieparzysta, wówczas bieżąca
		 * iteracja (bieżące powtórzenie pętli) kończy się.
		 * Instrukcje poniżej nie zostaną wykonane.
		 */
		
		// Dodanie liczby do bieżącej wartości sumy liczb:
		suma += liczba;								
	}
	
	cout << "Suma liczb parzystych wynosi: " << suma << endl;
	
	return 0;
}