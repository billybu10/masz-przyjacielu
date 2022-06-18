/* C++ - OBJECT ORIENTED PROGRAMMING   
   Drabinka instrukcji if.

   © Piotr Siewniak, wersja 30.VIII.2020 r.
*/

#include <iostream>
using namespace std;

main() {
	int ocena = 5;
	
	if (ocena >= 2) {
		cout << "Uczeń zaliczył sprawdzian na ocenę pozytywną!" << endl;
	 	if (ocena >= 3) {
			cout << "Uczeń rozwiązuje zadania samodzielnie!" << endl;
		 	if (ocena >= 4) {
				cout << "Uczeń dobrze opanował materiał nauczania!" << endl;
			 	if (ocena >= 5) {
					cout << "Uczeń jest prymusem!" << endl;
				}
			}
		}
	}
			
	return 0;
}