#include <iostream>
using namespace std;

struct Guru
{
    string nama;
    int umur;
};

struct Mapel
{
    int kkm;
    string nama_mapel;
    string status;

    Guru guru;
};

int main()
{
    Mapel mapel;

    mapel.guru.nama = "Fitri";
    mapel.guru.umur = 25;

    mapel.status = "wajib";
    mapel.nama_mapel = "Bahasa Indonesia";
    mapel.kkm = 75;

    cout << "Nama guru " << mapel.guru.nama << endl;
    cout << "Umur " << mapel.guru.umur << endl;
    
    cout << "Status " << mapel.status << endl;
    cout << "KKM " << mapel.kkm << endl;
    cout << "Mapel " << mapel.nama_mapel << endl;
}