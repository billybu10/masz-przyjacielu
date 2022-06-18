#include <iostream>

using namespace std;

int L1=0, L2=0, i=0, suma=0, sumapar=0, sumaniepar=0;

int main(){
    cout<<"Podaj L1: ";
    cin>>L1;
    cout<<"Podaj L2: ";
    cin>>L2;
    i=L1;
    
    while (i<=L2)
    {
        suma += i;
        if(i%2==0){
            sumapar += i;
        }
        if(i%2==1){
            sumaniepar += i;
        }
        i++;        
    }

    cout<<"Suma wszystkich liczb: "<<suma<<endl;
    cout<<"Suma liczb parzystych: "<<sumapar<<endl;
    cout<<"Suma liczb nieparzystych: "<<sumaniepar<<endl;

    return 0;
}