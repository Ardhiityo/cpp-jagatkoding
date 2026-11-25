#include <iostream>
using namespace std;

float calculate_total(int p, int l, string type)
{
    if (type == "luas")
    {
        return p * l;
    }
    else if (type == "keliling")
    {
        return 2 * (p + l);
    }
    else
    {
        return 0;
    }
}

void display_result(int p, int l)
{
    cout << "Luas" << endl;
    cout << "L = p x l" << endl;
    cout << "L = " << p << " x " << l << endl;
    cout << "L = " << calculate_total(p, l, "luas") << endl;
    cout << "=================================" << endl;
    cout << "Keliling" << endl;
    cout << "K = 2 ( p + l)" << endl;
    cout << "K = 2 ( " << p << " + " << l << " ) " << endl;
    cout << "K = " << calculate_total(p, l, "keliling") << endl;
}

int main()
{
    int p, l;
    string is_continue;

    do
    {
        system("cls");

        cout << "Masukan panjang \t: ";
        cin >> p;

        cout << "Masukan lebar \t: ";
        cin >> l;

        display_result(p, l);

        cout << "Lanjutkan (y/n) \t: ";
        cin >> is_continue;

    } while (is_continue == "y");

    system("cls");

    cout << "Program selesai" << endl;
}