#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    char znak = 'c';

    cout << isalnum(znak) << endl;

    cout << isalpha(znak) << endl;

    cout << islower(znak) << endl;

    cout << isupper(znak) << endl;

    cout << isdigit(znak) << endl;

    cout << isprint(znak) << endl;

    cout << ispunct(znak) << endl;

    cout << iscntrl(znak) << endl;

    return 0;
}