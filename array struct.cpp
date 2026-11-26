#include <iostream>
using namespace std;

struct Mahasiswa
{
    string nama;
    int nim;
};

int main()
{
    Mahasiswa mahasiswa[5];

    mahasiswa[0].nama = "Putra";
    mahasiswa[0].nim = 22040004;

    mahasiswa[1].nama = "Putri";
    mahasiswa[1].nim = 22040005;

    cout << "Nama \t: " << mahasiswa[0].nama << endl;
    cout << "Nim \t: " << mahasiswa[0].nim << endl;
    cout << endl;
    cout << "Nama \t: " << mahasiswa[1].nama << endl;
    cout << "Nim \t: " << mahasiswa[1].nim << endl;
}