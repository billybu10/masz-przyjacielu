#include <iostream>
#include <cmath>
#define USE_MATH_DEFINES

using namespace std;

int main()
{
    cout << "Wartość stałej PI: " << M_PI << endl;

    cout << "Wartość bezwzględna liczby -1: " << abs(-1) << endl;
    cout << "Kwadrat liczby 3" << pow(3, 2) << endl;
    cout << "Pierwiastek kwadratowy liczby 4: " << sqrt(4) << endl;

    cout << "Mniejsza z dwóch liczb 1 i 10 jest: " << fmin(1, 10) << endl;
    cout << "Większa z dwóch liczb 1 i 10 jest: " << fmax(1, 10) << endl;

    cout << "Zaokrąglenie liczby 1.55 do liczby całkowitej: " << round(1.55) << endl;

    double czescCalkowita;
    double czescUlamkowa = modf(1.55, &czescCalkowita);
    cout << "Część całkowita liczby 1.55: " << czescCalkowita << endl;
    cout << "Część ułamkowa liczby 1.55: " << czescUlamkowa << endl;
    cout << "Zaokrąglenie w górę liczby 1.55: " << ceil(1.55) << endl;
    cout << "Zaokrąglenie w dół liczby 1.55: " << floor(1.55) << endl;

    cout << "Sinus liczby PI/2: " << sin(M_PI / 2) << endl;

    return 0;
}