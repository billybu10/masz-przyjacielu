#include <iostream>

using namespace std;

struct Prostopad
{
    float boka;
    float bokb;
    float bokc;
    float dlugkraw;
    float pole;
    float objet;
};

void wczytanie(Prostopad &pierwszy)
{
    cout << "Podaj pierwszy bok prostopadłościanu: ";
    cin >> pierwszy.boka;
    cout << "Podaj drugi bok prostopadłościanu: ";
    cin >> pierwszy.bokb;
    cout << "Podaj trzeci bok prostopadłościanu: ";
    cin >> pierwszy.bokc;
}

void obliczanie(Prostopad &pierwszy)
{
    pierwszy.dlugkraw = 4 * (pierwszy.boka) + 4 * (pierwszy.bokb) + 4 * (pierwszy.bokc);
    pierwszy.pole = 2 * pierwszy.boka * pierwszy.bokb + 2 * pierwszy.bokc * pierwszy.bokb + 2 * pierwszy.boka * pierwszy.bokc;
    pierwszy.objet = pierwszy.boka * pierwszy.bokb * pierwszy.bokc;
}

void wypisanie(Prostopad &pierwszy)
{
    cout << "Długość krawędzi: " << pierwszy.dlugkraw << endl;
    cout << "Pole powierzchni: " << pierwszy.pole << endl;
    cout << "Objętość: " << pierwszy.objet << endl;
}

int main()
{
    Prostopad pierwszy;

    wczytanie(pierwszy);
    obliczanie(pierwszy);
    wypisanie(pierwszy);

    return 0;
}