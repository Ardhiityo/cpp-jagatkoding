#include <iostream>
#include <vector>
using namespace std;

struct Mahasiswa
{
    string nama;
    int nim;
    int nilai;
};

char grades(int nilai)
{
    if (nilai > 85)
    {
        return 'A';
    }
    else if (nilai > 75)
    {
        return 'B';
    }
    else if (nilai > 65)
    {
        return 'C';
    }
    else
    {
        return 'D';
    }
}

int main()
{
    int array_length;

    cout << "Jumlah mahasiswa \t: ";
    cin >> array_length;

    vector<Mahasiswa> items(array_length);

    for (int i = 0; i < array_length; i++)
    {
        cout << "Data ke-" << i + 1 << endl;

        cout << "NIM \t: ";
        cin >> items[i].nim;

        cout << "Nama \t: ";
        cin >> items[i].nama;

        cout << "Nilai \t: ";
        cin >> items[i].nilai;
    }

    cout << "=====================" << endl;
    cout << "Output" << endl;

    for (int i = 0; i < array_length; i++)
    {
        cout << "Data ke-" << i + 1 << endl;
        cout << "NIM \t: " << items[i].nim << endl;
        cout << "Nama \t: " << items[i].nama << endl;
        cout << "Nilai \t: " << items[i].nilai << endl;
        cout << "Grade \t: " << grades(items[i].nilai) << endl;
    }
}