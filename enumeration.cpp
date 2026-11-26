#include <iostream>
using namespace std;

enum Hari
{
    senin,
    selasa,
    rabu,
    kamis,
    jumat,
    sabtu,
    minggu
};

int main()
{
    Hari sekarang = jumat;
    Hari jadwal = kamis;
    int selisih = jadwal - sekarang;

    if (jadwal > sekarang)
    {
        cout << "Jadwal " << selisih << " hari lagi" << endl;
    }
    else if (jadwal < sekarang)
    {
        cout << "Jadwal " << selisih * -1 << " hari yang lalu" << endl;
    }
    else
    {
        cout << "Jadwal sekarang" << endl;
    }
}