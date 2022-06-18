/* C++ - OBJECT ORIENTED PROGRAMMING   
   Instrukcja warunkowa if-else.

   © Piotr Siewniak, wersja 30.VIII.2020 r.
*/

#include <iostream>
#include <cmath>

using namespace std;

main() {
	double a = 1;
	double b = 5;
	double c = 4;	
	
	double delta = b * b - 4 * a * c;	
	cout << "Delta wynosi: " << delta << endl;
		
	if (delta > 0) {
		double x1 = (-b - sqrt(delta))/(2 * a);
		double x2 = (-b + sqrt(delta))/(2 * a);
		cout << "Pierwszy pierwiastek = " << x1 << endl;
		cout << "Drugi pierwiastek = " << x2 << endl;
	}	
	else if (delta == 0) {
		double x0 = -b /(2 * a);		
		cout << "Pierwiastek = " << x0 << endl;
	}
	else {		
		cout << "Równanie nie posiada pierwiastków rzeczywistych" << endl;
	}

	return 0;
}