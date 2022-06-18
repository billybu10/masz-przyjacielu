#include <iostream>

using namespace std;

double a=0, b=0, c=0, w=0;

int main(){
    cout<<"Podaj a: ";
    cin>>a;
    cout<<"Podaj b: ";
    cin>>b;
    cout<<"Podaj c: ";
    cin>>c;
    
    if((b==0)&&(a+b==0)&&(a+b+a==0)){
        cout<<"nie można dzielic przez zero!"<<endl;
    }
    if((b!=0)&&(a+b!=0)&&(a+b+a!=0)){
        w = (a/b)+(c/(a+b))+((a+c)/(a+b+a));
        cout<<"Wynik to: "<<w<<endl;
    }
    
    return 0;
}