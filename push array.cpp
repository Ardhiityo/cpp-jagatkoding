#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    const int array_length = 5;
    string items[array_length];
    int index = -1;
    string is_continue;

    do
    {
        index++;
        if (index < array_length - 1)
        {
            cout << "Masukan nama barang \t: ";
            cin >> items[index];
        }
        else
        {
            cout << "Keranjang penuh" << endl;
            cout << "===================" << endl;
        }

        for (int i = 0; i < array_length; i++)
        {
            cout << items[i] << endl;
        }

        cout << "Lanjut (y/n) \t: ";
        cin >> is_continue;

        system("cls");
    } while (is_continue == "y");

    cout << "Program selesai" << endl;
}