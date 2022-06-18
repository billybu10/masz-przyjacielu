#include <iostream>

using namespace std;

float a,b,c,wynik;

int main (){
    cout<<"Obliczanie wyrażenia a/b+c/(a+b)-(a+c)/(a+b+a)"<<endl;
    cout<<"Autor: Jakub Budny"<<endl;
    
    cout<<"Podaj a: ";
    cin>>a;
    cout<<"Podaj b: ";
    cin>>b;
    cout<<"Podaj c: ";
    cin>>c;
    
    if((b==0)||(a+b==0)||(a+b+a==0)){
        cout<<"Nie mozna dzielić przez zero!";
    }
    else {
        wynik=(a/b)+(c/(a+b))-((a+c)/(a+b+a));

        cout<<"Wynik tego równania po podłożeniu podanych zmiennych to: "<<wynik;
    }

    return 0;
}