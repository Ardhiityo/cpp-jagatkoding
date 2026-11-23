#include <iostream>
using namespace std;

int main()
{
    int bilangan;

    cout << "Masukan bilangan \t:" << endl;
    cin >> bilangan;

    if (bilangan > 5)
    {
        cout << "Bilangan lebih dari 5";
    }

    if (bilangan <= 5)
    {
        cout << "Bilangan kurang dari sama dengan 5";
    }
}