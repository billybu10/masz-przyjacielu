#include <iostream>

using namespace std;

double suma,srednia;
int ang,pol,mat;

int main (){
    cout<<"Obliczanie średniej ocen semestralnych z j. polskiego, j. angielskiego i matematyki"<<endl;
    cout<<"Autor: Jakub Budny"<<endl;
    
    cout<<"Podaj ocenę semestralną z j. polskiego: ";
    cin>>pol;
    cout<<"Podaj ocenę semestralną z j. angielskiego: ";
    cin>>ang;
    cout<<"Podaj ocenę semestralną z matematyki: ";
    cin>>mat;

    suma=pol+ang+mat;
    srednia=suma/3;

    cout<<"Wyliczona średnia z podanych ocen semestralnych to: "<<srednia;

    return 0;
}