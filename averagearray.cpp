#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int array_length;
    double total = 0;

    cout << "Masukan jumlah array \t: ";
    cin >> array_length;

    vector<int> values(array_length);

    for (int i = 0; i < array_length; i++)
    {
        cout << "Masukan nilai index ke-" << i << "\t: ";
        cin >> values[i];
        total += values[i];
    }

    cout << "Rata-rata \t: " << total / array_length;
}