#include <math.h>
#include <cstdio>

int main()
{
    float stopnie, radiany, wyncos, wynsin, wyntan;

    printf("Podaj kąt w stopniach: ");
    scanf("%f", &stopnie);

    radiany = stopnie*M_PI/180;
    wyncos = cos(radiany);
    wynsin = sin(radiany);
    wyntan = tan(radiany);

    printf("Cosinus tego kąta to: %#f", wyncos);
    printf("Sinus tego kąta to: %#f", wynsin);
    printf("Tangens tego kąta to: %#f", wyntan);

    return 0;
}