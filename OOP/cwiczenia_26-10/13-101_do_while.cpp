#include <iostream>

using namespace std;

int main(){
    int L1=0, L2=0, suma=0, sumapar=0, sumaniepar=0;
    
    cout<<"Podaj liczbę początkową:"<<endl;
    cin>>L1;
    cout<<"Podaj liczbę końcową:"<<endl;
    cin>>L2;

    do{
        suma += L1;
        if(L1 % 2 == 0){
            sumapar += L1;
        }
        if(L1 % 2 == 1){
            sumaniepar += L1;
        }
        L1++;
    }
    while(L1<=L2);

    cout<<"Suma tych liczb jest równa: "<<suma<<endl;
    cout<<"Suma liczb parzystych w tym przedziale jest równa: "<<sumapar<<endl;
    cout<<"Suma liczb nieparzystych w tym przedziale jest równa: "<<sumaniepar<<endl;

    return 0;
}