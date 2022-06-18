#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    const char *napisI = "3";
    const char *napisF = "3.14159";

    cout << atol(napisI) << endl;
    cout << strtol(napisI, NULL, 0) << endl;

    cout << atof(napisF) << endl;
    cout << strtod(napisF, NULL) << endl;

    cout << strtof(napisF, NULL) << endl;

    return 0;
}