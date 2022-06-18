#include <iostream>

using namespace std;

int main(){
    int *wl = new int(0);

    cout<<"Podaj liczbe calkowita: ";
    cin>>*wl;

    if (*wl % 2 == 0)
    {
        cout<<"Ta liczba jest parzysta.";
    }
    else{
        cout<<"Ta liczba jest nieparzysta.";
    }
    

    delete wl;

    return 0;
}