#include <iostream>
#include <math.h>

using namespace std;

int main(){
    double a = 0, b = 0, c=0, o=0, p=0, k=0;
    double *wa = &a, *wb = &b, *wc= &c, *wo=&o, *wp=&p, *wk=&k;

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

    return 0;
}