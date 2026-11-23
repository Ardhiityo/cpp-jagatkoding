#include <iostream>
using namespace std;

int main()
{
    bool output;

    // OR
    // output = (1 > 2) or (2 < 1);
    output = (1 > 2) || (2 < 1); // false false
    output = (1 < 2) || (2 < 1); // true false

    // AND
    // output = (1 > 2) and (2 < 1);
    output = (1 > 2) && (2 < 1); // false false
    output = (1 < 2) && (2 < 1); // true false

    cout << output;
}