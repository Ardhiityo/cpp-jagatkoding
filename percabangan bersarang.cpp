#include <iostream>
using namespace std;

int main()
{
    int jkel;
    int umur;
    string status, kegiatan;

    cout << "Silahkan pilih jenis kelamin \t:" << endl;
    cout << "Laki-laki \t: 1" << endl;
    cout << "Perempuan \t: 2" << endl;
    cin >> jkel;
    cout << "Berapa umur anda \t: " << endl;
    cin >> umur;

    if (jkel == 1)
    {
        if (umur >= 27)
        {
            status = "Sudah waktunya";
            kegiatan = "Cari jodoh";
        }
        else
        {
            status = "Belum waktunya";
            kegiatan = "Kembangkan potensi diri";
        }
    }
    else if (jkel == 2)
    {
        if (umur >= 24)
        {
            status = "Sudah waktunya";
            kegiatan = "Cari jodoh";
        }
        else
        {
            status = "Belum waktunya";
            kegiatan = "Kembangkan potensi diri";
        }
    }
    else
    {
        status = "Unknown";
        kegiatan = "Unknown";
    }
    
    cout << status << " cari jodoh, silahkan " << kegiatan;
}
