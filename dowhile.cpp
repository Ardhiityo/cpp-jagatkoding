#include <iostream>
using namespace std;

int main()
{
    int p, l;
    string is_continue;

    do
    {
        cout << "Masukan panjang \t: " << endl;
        cin >> p;

        cout << "Masukan lebar \t: " << endl;
        cin >> l;

        cout << "Lebar persegi panjang adalah " << p * l << endl;

        cout << "lanjut \t: ";
        cin >> is_continue;
        cout << "=======================" << endl;
    } while (is_continue == "y");

    cout << "Program selesai" << endl;
}