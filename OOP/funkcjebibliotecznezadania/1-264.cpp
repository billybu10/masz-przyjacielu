#include <math.h>
#include <cstdio>

int main()
{
    int liczba, potega, wynik;

    printf("Podaj liczbę, która ma zostać podniesiona do danej potęgi: ");
    scanf("%d", &liczba);
    printf("Podaj potęgę, do której podniesiona ma zostać podana liczba: ");
    scanf("%d", &potega);

    wynik = pow(liczba, potega);

    printf("Wynik to: %#d", wynik);

    return 0;
}