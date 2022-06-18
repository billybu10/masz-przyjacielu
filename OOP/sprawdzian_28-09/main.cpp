#include <iostream>

using namespace std;

int main()
{
string s1 = "Runtime";
string s2 = "Java Runtime Environment";
if (s2.compare(s1)==(-1))
{
cout << "Napis " <<s1<< " jest pod lancuchem " <<s2<< endl;
}
else
{
    cout << "Napis " <<s1<< " nie jest pod lancuchem " <<s2<< endl;
}
return 0;
}