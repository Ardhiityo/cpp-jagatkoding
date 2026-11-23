#include <iostream>
using namespace std;

int main()
{
    int bilangan = 5;

    cout << "bilangan awal : \t" << bilangan;

    bilangan += 10;
    cout << "bilangan \t: " << bilangan;

    bilangan -= 5;
    cout << "bilangan \t: " << bilangan;

    bilangan %= 5;
    cout << "bilangan \t: " << bilangan;
}