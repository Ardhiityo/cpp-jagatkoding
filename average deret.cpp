#include <iostream>

using namespace std;

int main()
{
    int array_length, nilai;
    float total = 0;

    cout << "Masukan jumlah index \t: ";
    cin >> array_length;

    for (int i = 0; i < array_length; i++)
    {
        cout << "Nilai index ke-" << i << "\t: ";
        cin >> nilai;

        total += nilai;
    }

    cout << "Total nilai rata-rata " << total / array_length;
}