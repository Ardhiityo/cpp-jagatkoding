#include <iostream>
using namespace std;

int main()
{
    int bilangan;
    string hasil;

    cout << "Masukan bilangan \t:";
    cin >> bilangan;

    hasil = bilangan % 2 == 1 ? "Ganjil" : "Genap";

    cout << "Bilangan " << bilangan << " termasuk bilangan " << hasil;
}