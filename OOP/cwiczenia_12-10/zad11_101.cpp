#include <iostream>
#include <math.h>

using namespace std;

float y,x,bufor;

int main (){
    cout<<"Obliczanie wyrazenia y=f(x)=sqrt(sin(x)/(x-1))"<<endl;
    cout<<"Autor: Jakub Budny"<<endl;
    
    cout<<"Podaj x: ";
    cin>>x;

    bufor=sin(x)/(x-1);
    
    if(x-1==0){
        cout<<"Nie mozna dzielic przez zero!";
    }
    else if (bufor<0) {
        cout<<"Nie mozna pierwiastkowac liczb ujemnych";
    }
    else {
        y=sqrt(sin(x)/(x-1));
        cout<<"y jest równe: "<<y;
    }

    return 0;
}