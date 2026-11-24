#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int array_length;
    int value;

    cout << "Masukan jumlah array :\t";
    cin >> array_length;

    vector<int> values(array_length);

    for (int i = 0; i < array_length; i++)
    {
        cout << "Masukan value array index ke-" << i << "\t: ";
        cin >> value;
        values[i] = value;
    }

    cout << "Value tersimpan \t:" << endl;
    for (int i = 0; i < array_length; i++)
    {
        cout << values[i] << endl;
    }
}