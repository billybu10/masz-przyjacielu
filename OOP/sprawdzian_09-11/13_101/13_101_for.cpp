#include <iostream>

using namespace std;

int L1=0, L2=0, suma=0, sumapar=0, sumaniepar=0;

int main(){
    cout<<"Podaj L1: ";
    cin>>L1;
    cout<<"Podaj L2: ";
    cin>>L2;
    
    for(int i = L1; i <= L2; i++){
        suma += i;
        if(i % 2 == 0){
            sumapar += i;
        }
        if(i % 2 == 1){
            sumaniepar += i;
        }
    }

    cout<<"Suma wszystkich liczb: "<<suma<<endl;
    cout<<"Suma liczb parzystych: "<<sumapar<<endl;
    cout<<"Suma liczb nieparzystych: "<<sumaniepar<<endl;

    return 0;
}