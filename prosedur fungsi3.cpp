#include <iostream>
#include <string>
using namespace std;

bool hitung_nilai(int nilai)
{
    if (nilai >= 75)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void nilai_siswa(string nama, int nilai)
{
    if (hitung_nilai(nilai))
    {
        cout << nama << " lulus dengan nilai " << nilai << endl;
    }
    else
    {
        cout << nama << " tidak lulus dengan nilai " << nilai << endl;
    }
}

int main()
{
    string nama;
    int nilai;

    cout << "Nama \t: ";
    getline(cin, nama);

    cout << "Nilai \t: ";
    cin >> nilai;

    nilai_siswa(nama, nilai);
}