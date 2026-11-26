#include <iostream>
#include <vector>
using namespace std;

struct Mahasiswa
{
    string nama;
    string umur;
};

int main()
{
    int array_length;

    cout << "Masukan jumlah index \t:";
    cin >> array_length;

    vector<Mahasiswa> items(array_length);

    for (int i = 0; i < array_length; i++)
    {
        cout << "Masukan data ke-" << i + 1 << " \t: " << endl;

        cout << "Nama \t: ";
        cin >> items[i].nama;

        cout << "Umur \t: ";
        cin >> items[i].umur;
    }

    for (int i = 0; i < array_length; i++)
    {
        cout << "Data ke-" << i + 1 << " \t: " << endl;

        cout << "Nama \t: " << items[i].nama << endl;
        cout << "Umur \t: " << items[i].umur << endl;
    }
}