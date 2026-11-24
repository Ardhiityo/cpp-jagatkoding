#include <iostream>
using namespace std;

int main()
{
    int data[] = {3, 1, 5, 8, 4, 5, 10, 12, 1};
    int array_length = sizeof(data) / sizeof(*data);
    int search;
    int total_data_found;

    cout << "Data tersedia \t:" << endl;
    for (size_t i = 0; i < array_length; i++)
    {
        cout << "Index ke-" << i << " \t: " << data[i] << endl;
    }

    cout << "Masukan data yang dicari \t: ";
    cin >> search;

    total_data_found = 0;

    for (int j = 0; j < array_length; j++)
    {
        if (data[j] == search)
        {
            total_data_found++;
        }
    }

    if (total_data_found > 0)
    {
        cout << "Data ditemukan sebanyak " << total_data_found << endl;
    }
    else
    {
        cout << "Data tidak ditemukan" << endl;
    }

    for (int k = 0; k < array_length; k++)
    {
        if (data[k] == search)
        {
            cout << "Data ditemukan di index ke-" << k << endl;
        }
    }
}