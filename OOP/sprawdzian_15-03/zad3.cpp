#include <iostream>

using namespace std;

struct Prost
{
    float a, b, obw, pole;
};

void wczytaj(Prost *ppw)
{
    cout << "Podaj bok A prostokąta: ";
    cin >> ppw->a;
    cout << "Podaj bok B prostokąta: ";
    cin >> ppw->b;
}

void oblicz(Prost *ppw)
{
    ppw->obw = 2 * (ppw->a + ppw->b);
    ppw->pole = (ppw->a) * (ppw->b);
}

void wypisz(const Prost *ppw)
{
    cout << endl;
    cout << "Bok A: " << ppw->a << endl;
    cout << "Bok B: " << ppw->b << endl;
    cout << "Obwód: " << ppw->obw << endl;
    cout << "Pole: " << ppw->pole << endl;
}

int main()
{
    Prost ppa;
    Prost *wsk = &ppa;

    wczytaj(wsk);
    oblicz(wsk);
    wypisz(wsk);

    return 0;
}