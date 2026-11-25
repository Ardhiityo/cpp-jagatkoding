#include <iostream>
using namespace std;

float calculate_r(int c)
{
    return 0.8 * c;
}

float calculate_f(int c)
{
    return 1.8 * c + 32;
}

float calculate_k(int c)
{
    return c + 273.15;
}

void dipslay_data(int c)
{
    cout << c << " celcius " << endl;
    cout << "r \t: " << calculate_r(c) << endl;
    cout << "f \t: " << calculate_f(c) << endl;
    cout << "k \t: " << calculate_k(c) << endl;
}

int main()
{
    string is_continue;
    int celcius;

    do
    {
        system("cls");

        cout << "Masukan celcius \t: ";
        cin >> celcius;

        dipslay_data(celcius);

        cout << "Lanjutkan (y/n) \t: ";
        cin >> is_continue;

    } while (is_continue == "y");
}