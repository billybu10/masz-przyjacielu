#include <iostream>

using namespace std;

struct Uczen
{
    string imie;
    string nazwisko;
    Data urodz;
    string klasa;
    int gr;
};

struct Data
{
    int dzu;
    int mu;
    int ru;
}

void
wczytanie(Uczen &pierwszy)
{
    cout << "Podaj imię: ";
    cin >> pierwszy.imie;
    cout << "Podaj nazwisko: ";
    cin >> pierwszy.nazwisko;
    cout << "Podaj dzień urodzenia: ";
    cin >> pierwszy.urodz.dzu;
    cout << "Podaj miesiąc urodzenia: ";
    cin >> pierwszy.urodz.mu;
    cout << "Podaj rok urodzenia: ";
    cin >> pierwszy.urodz.ru;
    cout << "Podaj klasę: ";
    cin >> pierwszy.klasa;
    cout << "Podaj grupę: ";
    cin >> pierwszy.gr;
}

void wypisanie(Uczen &pierwszy)
{
    cout << "Imię: " << pierwszy.imie << endl;
    cout << "Nazwisko: " << pierwszy.nazwisko << endl;
    cout << "Dzień urodzenia: " << pierwszy.urodz.dzu << endl;
    cout << "Miesiąc urodzenia: " << pierwszy.urodz.mu << endl;
    cout << "Rok urodzenia: " << pierwszy.urodz.ru << endl;
    cout << "Klasa: " << pierwszy.klasa << endl;
    cout << "Grupa: " << pierwszy.gr << endl;
}

int main()
{
    Uczen pierwszy;

    wczytanie(pierwszy);
    wypisanie(pierwszy);

    return 0;
}