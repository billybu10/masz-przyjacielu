#include <iostream>

using namespace std;

double bufor=0, maxim=0, minim=0;
int z=0; 

int main(){
    cout<<"Ile liczb chcesz podać: ";
    cin>>z;
    
    for (int i=1;i<=z;i++)
    {
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
    }

    cout<<"Największa spośród tych liczb: "<<maxim<<endl;
    cout<<"Najmniejsza spośród tych liczb: "<<minim<<endl;

    return 0;
}