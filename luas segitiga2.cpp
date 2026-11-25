#include <iostream>
using namespace std;

float calculate_total(int a, int t)
{
    return 0.5 * (a * t);
}

void display_result(int a, int t)
{
    cout << "L = 0.5 (a x t)" << endl;
    cout << "L = 0.5 " << "( " << a << " x " << t << " )" << endl;
    cout << "L = " << calculate_total(a, t) << endl;
}

int main()
{
    int a, t;
    string is_continue;

    do
    {
        cout << "Masukan alas \t: ";
        cin >> a;

        cout << "Masukan tinggi \t: ";
        cin >> t;

        display_result(a, t);

        cout << "Lanjutkan (y/n) \t: ";
        cin >> is_continue;

    } while (is_continue == "y");
}