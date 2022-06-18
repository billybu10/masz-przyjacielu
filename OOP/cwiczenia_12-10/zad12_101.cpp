#include <iostream>

using namespace std;

float y,x;

int main (){
    cout<<"Obliczanie wyrażenia y=f(x)"<<endl;
    cout<<"Autor: Jakub Budny"<<endl;
    
    cout<<"Podaj x: ";
    cin>>x;
    
    if(x<=-10){
        y=0;
    }
    else if((x>-10)&&(x<=0)) {
        y=1;
    }
    else if((x>0)&&(x<=10)) {
        y=2;
    }
    else if(x>10) {
        y=0;
    }

    cout<<"y jest równe: "<<y;

    return 0;
}