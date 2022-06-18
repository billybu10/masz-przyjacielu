#include <iostream>

using namespace std;

float x,y;

int main (){
    cout<<"Wyznaczanie miejsca zerowego funkcji y=f(x)=2*x-4"<<endl;
    cout<<"Autor: Jakub Budny"<<endl;
    
    y=0;
    //By wyznaczyć x trzeba przekształcić y=2*x-4 w x=(y+4)/2, ponieważ chcemy wyznaczyć x, a jako iż w tym przypadku wyznaczamy miejsce zerowe to tu y=0
    x=(y+4)/2;
    cout<<"Miejsce zerowe tej funkcji to y=0=f("<<x<<")=2*"<<x<<"-4";

    return 0;
}