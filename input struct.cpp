#include <iostream>
#include <string>
using namespace std;

struct Guru
{
    string nama;
    int umur;
};

struct Mapel
{
    string nama_mapel;
    int kkm;

    Guru guru;
};

int main()
{
    Mapel mapel1;

    cout << "Nama mapel \t: ";
    std::getline(cin, mapel1.nama_mapel);

    cout << "KKM \t\t: ";
    cin >> mapel1.kkm;

    cin.ignore(); // menghapus karakter \n yang tertinggal

    cout << "Nama guru \t: ";
    std::getline(cin, mapel1.guru.nama);

    cout << "Umur guru \t: ";
    cin >> mapel1.guru.umur;

    cin.ignore();

    cout << "=====================" << endl;
    cout << "Output" << endl;
    cout << "=====================" << endl;

    cout << "Nama mapel \t: " << mapel1.nama_mapel << endl;
    cout << "KKM \t\t: " << mapel1.kkm << endl;
    cout << "Nama Guru \t: " << mapel1.guru.nama << endl;
    cout << "Umur Guru \t: " << mapel1.guru.umur << endl;
}