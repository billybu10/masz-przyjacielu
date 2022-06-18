#include <iostream>

using namespace std;

int main(){
    int a=0, suma=0, srednia=0, i=0, minim, maxim;


    for(i=0;i<10;i++){
        cout<<"Podaj "<<i+1<<". liczbe: ";
        cin>>a;
        
        suma += a;

        if(i == 0){
            minim = a;
            maxim = a;
        }
        if(a < minim){
            minim = a;
        }
        if(a > maxim){
            maxim = a;
        }
    }

    srednia = suma / 10;

    cout<<"Suma tych liczb jest rowna: "<<suma<<endl;
    cout<<"Srednia tych liczb jest rowna: "<<srednia<<endl;
    cout<<"Najwieksza sposrod tych liczb to: "<<maxim<<endl;
    cout<<"Najmniejsza sposrod tych liczb to: "<<minim<<endl;

    return 0;
}