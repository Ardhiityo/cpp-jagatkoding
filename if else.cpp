#include <iostream>
using namespace std;

int main()
{
    int bilangan;

    cout << "Masukan bilangan \t:";
    cin >> bilangan;

    if (bilangan % 2 == 1)
    {
        cout << std::to_string(bilangan) << " adalah bilangan ganjil";
    }
    else
    {
        cout << std::to_string(bilangan) << " adalah bilangan genap";
    }
}