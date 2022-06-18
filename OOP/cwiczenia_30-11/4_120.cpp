#include <iostream>
#include <math.h>

using namespace std;

int main(){
    double *wa = new double(0), *wb = new double(0), *wc= new double(0), *wo=new double(0), *wp=new double(0), *wk=new double(0);

    cout<<"Podaj bok a: ";
    cin>>*wa;
    cout<<"Podaj bok b: ";
    cin>>*wb;
    cout<<"Podaj bok c: ";
    cin>>*wc;

    *wp = (2* *wa * *wb) + (2 * *wa * *wc) + (2 * *wb * *wc);
    *wo = *wa * *wb * *wc;
    *wk = (4 * *wa) + (4 * *wb) + (4 * *wc);

    cout<<"Pole tego prostopadloscianu to: "<<*wp<<endl;
    cout<<"Objetosc tego prostopadloscianu to: "<<*wo<<endl;
    cout<<"Suma dlugosci wszystkich krawedzi tego prostopadloscianu to: "<<*wk<<endl;

    delete wa;
    delete wb;
    delete wc;
    delete wo;
    delete wp;
    delete wk;

    return 0;
}