#include <iostream>
using namespace std;

int main()
{
    int jml;

    cout << "Jumlah baris bintang \t: ";
    cin >> jml;

    for (int i = 1; i <= jml; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << "*";
        }
        cout << "*" << endl;
    }
}