#include <iostream>

using namespace std;

struct Dat
{
    int dzien, mies, rok;
};

struct Auto
{
    string marka, model;
    int rokprod;
    Dat datarej;
};

void wczytaj(Auto &nowe)
{
    cout << "Podaj markę auta: ";
    cin >> nowe.marka;
    cout << "Podaj model auta: ";
    cin >> nowe.model;
    cout << "Podaj rok produkcji auta: ";
    cin >> nowe.rokprod;
    cout << "Podaj datę pierwszej rejestracji auta: " << endl;
    cout << "Dzień: ";
    cin >> nowe.datarej.dzien;
    cout << "Miesiąc: ";
    cin >> nowe.datarej.mies;
    cout << "Rok: ";
    cin >> nowe.datarej.rok;
}
void wypisz(const Auto &nowe)
{
    cout << endl;
    cout << "Marka auta: " << nowe.marka << endl;
    cout << "Model auta: " << nowe.model << endl;
    cout << "Rok produkcji auta: " << nowe.rokprod << endl;
    cout << "Data pierwszej rejestracji auta: " << endl;
    cout << "Dzień: " << nowe.datarej.dzien << endl;
    cout << "Miesiąc: " << nowe.datarej.mies << endl;
    cout << "Rok: " << nowe.datarej.rok << endl;
}

int main()
{
    Auto nowe;

    wczytaj(nowe);
    wypisz(nowe);

    return 0;
}