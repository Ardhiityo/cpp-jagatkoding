#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int array_length, max, min, current_value;

    cout << "Masukan jumlah nilai \t: ";
    cin >> array_length;

    vector<int> values(array_length);

    for (int i = 0; i < array_length; i++)
    {
        cout << "masukan nilai ke " << i + 1 << "\t: ";
        cin >> values[i];
    }

    for (int j = 0; j < array_length; j++)
    {
        current_value = values[j];

        if (j == 0)
        {
            max = current_value;
            min = current_value;
        }

        if (current_value < min)
        {
            min = current_value;
        }

        if (current_value > max)
        {
            max = current_value;
        }
    }

    cout << "Nilai max " << max << endl;
    cout << "Nilai min " << min << endl;
}