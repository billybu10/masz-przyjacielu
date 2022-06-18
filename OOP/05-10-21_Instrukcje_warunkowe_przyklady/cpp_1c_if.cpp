/* C++ - OBJECT ORIENTED PROGRAMMING   
   Operator warunkowy (ternary operator).

   © Piotr Siewniak, wersja 30.VIII.2020 r.
*/

#include <iostream>
using namespace std;

main() {
	int liczba = -1;
	cout << "Liczba = " << liczba << endl;
	
	int wb = (liczba >= 0) ? liczba : -liczba;	
	// if (liczba >= 0) wb = liczba; else wb = -liczba;
	cout << "Wartość bezwzględna: " << wb << endl;
			
	return 0;
}