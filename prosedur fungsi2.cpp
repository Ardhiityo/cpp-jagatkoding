#include <iostream>
#include <string>
using namespace std;

void siswa(string nama, string kelas)
{
    cout << nama << " adalah siswa kelas " << kelas << endl;
}

int main()
{
    string nama, kelas;

    cout << "Nama \t: ";
    getline(cin, nama);

    cout << "Kelas \t: ";
    getline(cin, kelas);

    siswa(nama, kelas);
}