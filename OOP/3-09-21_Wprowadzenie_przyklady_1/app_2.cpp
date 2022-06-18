/* C++ - OBJECT ORIENTED PROGRAMMING   
   Operacje wejścia-wyjścia. 

   © Piotr Siewniak, wersja 30.VIII.2020 r.
*/

// Dołączenie zbioru nagłówkowego zawierającego standardowe strumienie wejścia/wyjścia:
#include <iostream>
#include <string>

int main()
{
	std::string imie, nazwisko;
	
	/* UWAGA
		W deklaracjach zmiennych powyżej wykorzystano standardową przestrzeń nazw (namespace) std
		wraz z operatorem/kwalifikatorem zakresu (scope operator/qualifier) :: .
		Oznacza to, że wykorzystujemy typ danych string, który został zdefiniowany w przestrzeni
		nazw std.
		
		Co to jest przestrzeń nazw?
		Przestrzeń nazw jest to deklaratywna grupa (region), w którym można deklarować i definiować
		obiekty (typy danych, zmienne, stałe, funkcje itp.) o określonych nazwach (identyfikatorach).
		Przestrzeń nazw pozwala na grupowanie pod względem logicznym różnych elementów - jednostek.
		Jeżeli dana jednostka, np. funkcja, została zdefiniowana w określonej przestrzeni nazw,
		to zasięg jej identyfikatora odnosi się wyłącznie do tej przestrzeni nazw.
		W różnych przestrzeniach nazw mogą się znajdować jednostki o takich samych nazwach.
		
		Przykład:
		// Definicja przestrzeni nazw p1:
		namespace p1 { 
			double pi() { 
			  return 3.14159; 
			} 
		} 
		// Definicja przestrzeni nazw p2:
		namespace p2 { 
			double pi() { 
			  return 3.14159; 
			} 
		} 
		
	   Odwołanie do funkcji pi() zdefiniowanej w przestrzeni nazw p1:
			p1::pi()
	   Odwołanie do funkcji pi() zdefiniowanej w przestrzeni nazw p2:
			p2::pi()
	*/
	
	std::cout << "Podaj dane pracownika:" << std::endl;
	std::cout << "imię = ";
	std::cin >> imie;
	std::cout << "nazwisko = ";
	std::cin >> nazwisko;
	/* UWAGA
	 * W języku C++ operacje wejścia/wyjścia są realizowane przy wykorzystaniu strumieni (streams).
	 * 
	 * Standardowy strumień wejścia nazywa się cin - dane przepływają (flow) w kierunku od
	 * standardowego urządzenia wejściowego (klawiatury) do pamięci głównej.
	 * Wraz z obiektem cin używany jest operator wyodrębniania strumienia (stream extraction 
	 * operator) >> .
	 * 
	 * Standardowy strumień wyjścia to cout - dane przepływają z pamięci do standardowego 
	 * urządzedzia wyjściowego - ekranu monitora.
	 * Wraz z obiektem cout używany jest operator wstawiania strumienia (stream insertion 
	 * operator) << .
	 */
		
	std::cout << "\nWprowadzone dane:" << std::endl;
	std:: cout << imie << " " << nazwisko;
	
	return 0;
}
