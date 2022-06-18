#include <iostream>

using namespace std;

int main(){
    int bj = 1, bd = 0;
    const int *wbj = &bj, *wbd = &bd;
    int a = 0, b = 0;
    int *wa = &a, *wb = &b;
    bool ba = 0, bb = 0;
    bool *wba = &ba, *wbb = &bb;


    cout<<"Podaj pierwsza wartosc: ";
    cin>>*wa;
    cout<<"Podaj druga wartosc: ";
    cin>>*wb;

    if (*wa == *wbj)
    {
        *wba = true;
    }
    if (*wa == *wbd)
    {
        *wba = false;
    }
    if (*wb == *wbj)
    {
        *wbb = true;
    }s
    if (*wb == *wbd)
    {
        *wbb = false;
    }
    
    

    return 0;
}