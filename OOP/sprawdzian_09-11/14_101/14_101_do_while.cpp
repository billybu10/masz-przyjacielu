#include <iostream>

using namespace std;

double bufor=0, maxim=0, minim=0;
int z=0, i=1; 

int main(){
    cout<<"Ile liczb chcesz podać: ";
    cin>>z;
    
    
    do{
        cout<<"Podaj "<<i<<". liczbę: ";
        cin>>bufor;
        
        if(i==1){
            maxim = bufor;
            minim = bufor;
        }
        if(bufor < minim){
            minim = bufor;
        }
        if(bufor > maxim){
            maxim = bufor;
        }
        i++;        
    }while (i<=z);

    cout<<"Największa spośród tych liczb: "<<maxim<<endl;
    cout<<"Najmniejsza spośród tych liczb: "<<minim<<endl;

    return 0;
}