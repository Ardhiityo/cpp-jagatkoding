#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Masukan jumlah kolom \t: ";
    cin >> b;

    cout << "Masukan jumlah baris \t: ";
    cin >> a;

    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j < b; j++)
        {
            cout << "* ";
        }
        cout << "* " << endl;
    }
}