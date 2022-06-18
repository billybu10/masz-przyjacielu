#include <iostream>

using namespace std;

int a, b;

int main ()
{
    cout<<"-------------------------------------------"<<endl;
    cout<<"Pole i obwod prostokata. Autor: Jakub Budny"<<endl;
    cout<<"-------------------------------------------"<<endl;
    cout<<"Podaj dlugosc pierwszego boku prostokata: ";
    cin>>a;
    cout<<"Podaj dlugosc drugiego boku prostokata: ";
    cin>>b;
    cout<<"Pole prostokata to: "<<a*b<<endl;
    cout<<"Obwod tego prostokata to: "<<2*a+2*b<<endl;
    return 0;
}
