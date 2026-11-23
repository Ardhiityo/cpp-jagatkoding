#include <iostream>
using namespace std;

int main()
{
    int bilangan;
    string jenis;

    cout << "input bilangan \t: ";
    cin >> bilangan;

    jenis = bilangan % 2 == 1 ? "Ganjil" : "Genap";

    cout << "Bilangan " << bilangan << " termasuk bilangan " << jenis;
}