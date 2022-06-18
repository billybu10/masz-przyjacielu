#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));

    cout << RAND_MAX << endl;

    cout << (rand() % 100 + 1) << endl;

    return 0;
}