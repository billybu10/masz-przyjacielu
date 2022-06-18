#include <iostream>
#include <math.h>

using namespace std;

struct Punkt
{
    float x;
    float y;
};

void wczytanie(Punkt &pierwszy, Punkt &drugi)
{
    cout << "Podaj x pierwszego punktu: ";
    cin >> pierwszy.x;
    cout << "Podaj y pierwszego punktu: ";
    cin >> pierwszy.y;
    cout << "Podaj x drugiego punktu: ";
    cin >> drugi.x;
    cout << "Podaj y drugiego punktu: ";
    cin >> drugi.y;
}

float obliczanie(Punkt &pierwszy, Punkt &drugi)
{
    float war = sqrt(pow((drugi.x - pierwszy.x), 2) + pow((drugi.y - pierwszy.y), 2));
    return war;
}

void wypisanie(float zmienna)
{
    cout << "Odległość: " << zmienna << endl;
}

int main()
{
    Punkt pierwszy;
    Punkt drugi;

    wczytanie(pierwszy, drugi);
    wypisanie(obliczanie(pierwszy, drugi));

    return 0;
}