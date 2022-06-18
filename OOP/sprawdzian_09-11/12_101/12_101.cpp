#include <iostream>

using namespace std;

double y=0, x=0;

int main(){
    cout<<"Podaj x: ";
    cin>>x;
    
    if(x<=-10){
        y=0;
    }
    else if((x>-10)&&(x<=0)){
        y=1;
    }
    else if((x>0)&&(x<=10)){
        y=2;
    }else if(x>10){
        y=0;
    }
    
    cout<<"y to: "<<y<<endl;

    return 0;
}