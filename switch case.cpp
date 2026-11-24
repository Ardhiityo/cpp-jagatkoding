#include <iostream>
using namespace std;

int main()
{
    int jkel;

    cout << "Pilih jenis kelamin \t:" << endl;
    cout << "Laki-laki : 1" << endl;
    cout << "Perempuan : 2" << endl;
    cin >> jkel;

    switch (jkel)
    {
    case 1:
        cout << "Jenis kelamin laki-laki";
        break;
    case 2:
        cout << "Jenis kelamin perempuan";
        break;
    default:
        cout << "Jenis kelamin tidak diketahui";
    }
}