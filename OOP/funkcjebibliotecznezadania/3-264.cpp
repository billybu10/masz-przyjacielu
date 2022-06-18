#include <iostream>
#include <math.h>
#include <cstdio>

struct Pracownik{
    char plec;
    char* imie = new char();
    char* nazwisko = new char();
};

int main()
{
    Pracownik nowy;

    printf("Podaj imię pracownika: ");
    scanf("%s", &nowy.imie);
    fflush(stdin);
    printf("Podaj nazwisko pracownika: ");
    scanf("%s", &nowy.nazwisko);
    fflush(stdin);
    printf("Podaj płeć pracownika: ");
    scanf("%c", &nowy.plec);
    
    printf("Imię tego pracownika to: %s\n", &nowy.imie);
    printf("Nazwisko tego pracownika to: %s\n", &nowy.nazwisko);
    printf("Płeć tego pracownika to: %c\n", nowy.plec);

    return 0;
}