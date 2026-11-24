#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int array_length, total;

    cout << "Masukan jumlah array \t: ";
    cin >> array_length;

    vector<int> values(array_length);

    for (int i = 0; i < array_length; i++)
    {
        cout << "Masukan nilai array ke-" << i << "\t:";
        cin >> values[i];
    }

    cout << "Daftar nilai \t:" << endl;
    total = 0;
    for (int i = 0; i < array_length; i++)
    {
        cout << values[i] << endl;
        total += values[i];
    }

    cout << "Jumlah nilai " << total << endl;
}