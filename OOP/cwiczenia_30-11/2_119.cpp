#include <iostream>
#include <math.h>

using namespace std;

int main(){
    double *wr = new double(0), *wp = new double(0), *wo= new double(0);

    cout<<"Podaj promien kola: ";
    cin>>*wr;

    *wp = M_PI * *wr * *wr;
    *wo = 2 * M_PI * *wr;

    cout<<"Pole tego kola to: "<<*wp<<endl;
    cout<<"Obwod tego kola to: "<<*wo<<endl;

    delete wr;
    delete wp;
    delete wo;

    return 0;
}