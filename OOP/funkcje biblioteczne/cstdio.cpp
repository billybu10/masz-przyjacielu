#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    float bok1, bok2, pole, obwod;

    printf("Podaj długości boków prostokąta");
    printf("Pierwszy bok = ");

    scanf("%f", &bok1);

    printf("Drugi bok = ");
    scanf("%f", &bok2);

    pole = bok1 * bok2;

    printf("Pole wynosi: %6.2f\n", pole);

    obwod = 2 * bok1 + 2 * bok2;
    printf("Obwód wynosi: %6.2f\n", obwod);

    return 0;
}