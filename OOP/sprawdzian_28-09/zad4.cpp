#include <iostream>

using namespace std;

float a,b,c,d,wynik;

int main (){
    cout<<"Obliczanie wyrażenia"<<endl;
    cout<<"Autor: Jakub Budny"<<endl;
    
    cout<<"Podaj a: ";
    cin>>a;
    cout<<"Podaj b: ";
    cin>>b;
    cout<<"Podaj c: ";
    cin>>c;
    cout<<"Podaj d: ";
    cin>>d;
    
    wynik=(a+b)/(c+d)+(a/c)+(b/d);

    cout<<"Wynik tego równania po podłożeniu podanych zmiennych to: "<<wynik;

    return 0;
}