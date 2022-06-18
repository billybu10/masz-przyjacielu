#include <iostream>
#include <math.h>

using namespace std;

int main(){
    double r = 0, p = 0, o=0;
    double *wr = &r, *wp = &p, *wo= &o;

    cout<<"Podaj promien kola: ";
    cin>>*wr;

    *wp = M_PI * *wr * *wr;
    *wo = 2 * M_PI * *wr;

    cout<<"Pole tego kola to: "<<*wp<<endl;
    cout<<"Obwod tego kola to: "<<*wo<<endl;

    return 0;
}