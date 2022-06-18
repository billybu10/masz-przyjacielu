/* C++ - OBJECT ORIENTED PROGRAMMING   
   Instrukcja warunkowa if-else.

   © Piotr Siewniak, wersja 30.VIII.2020 r.
*/

#include <iostream>
#include <string>

using namespace std;

main() {
	int liczba = -1;
	cout << "Liczba = " << liczba << endl;
	
	int wb;
	if (liczba >= 0) wb = liczba;
		else wb = -liczba;
	cout << "Wartość bezwzględna: " << wb << endl;
		

	return 0;
}