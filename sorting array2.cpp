#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int array_length;
    int value, prev, current;

    cout << "Masukan jumlah data \t: ";
    cin >> array_length;

    vector<int> values(array_length);

    for (int a = 0; a < array_length; a++)
    {
        cout << "Nilai ke-" << a + 1 << "\t: ";
        cin >> values[a];
    }

    // sortir dari kiri ke kanan
    for (int i = 0; i < array_length; i++)
    {
        if (i > 0)
        {
            if (values[i] < values[i - 1])
            {
                value = values[i - 1];
                values[i - 1] = values[i];
                values[i] = value;
            }
        }
    }

    // sortir dari kanan ke kiri
    for (int h = array_length - 1; h >= 0; h--)
    {
        if (h > 0)
        {
            if (values[h - 1] > values[h])
            {
                current = values[h];
                prev = values[h - 1];
                values[h] = prev;
                values[h - 1] = current;
            }
        }
    }

    cout << "Hasil sorting \t: " << endl;

    for (int j = 0; j < array_length; j++)
    {
        cout << values[j] << endl;
    }
}