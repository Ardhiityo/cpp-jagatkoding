#include <iostream>
#include <cmath>
using namespace std;

float calculate_value(int angka, int pangkat)
{
    return pow(angka, pangkat);
}

void display_result(int angka, int pangkat)
{
    cout << "Hasil dari " << angka << " pangkat " << pangkat << " adalah \t: " << calculate_value(angka, pangkat) << endl;
}

int main()
{
    int angka, pangkat;
    string is_continue;

    do
    {
        cout << "Masukan angka \t: ";
        cin >> angka;

        cout << "Masukan pangkat \t: ";
        cin >> pangkat;

        display_result(angka, pangkat);

        cout << "Lanjutkan (y/n) \t: ";
        cin >> is_continue;

    } while (is_continue == "y");
}