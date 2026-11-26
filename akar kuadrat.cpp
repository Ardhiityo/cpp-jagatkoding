#include <iostream>
#include <cmath>
using namespace std;

float calculate_value(int angka)
{
    return sqrt(angka);
}

void display_result(int angka)
{
    cout << "Akar kuadrat dari " << angka << " adalah " << calculate_value(angka) << endl;
}

int main()
{
    int angka;
    string is_continue;

    do
    {
        cout << "Masukan angka \t : ";
        cin >> angka;

        display_result(angka);

        cout << "Lanjutkan (y/n) \t: ";
        cin >> is_continue;

    } while (is_continue == "y");
}