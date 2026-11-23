#include <iostream>
using namespace std;

int main()
{
    string aktivitas;
    string tempat;
    int umur;

    cout << "Apa aktivitas anda \t: ";
    getline(cin, aktivitas);

    cout << "Dimana anda " << aktivitas << "\t:";
    getline(cin, tempat);

    cout << "Anda sedang " << aktivitas << " di " << tempat;

    cout << "Berapa umur anda \t:";
    cin >> umur;

    cout << "Anda berumur " << umur;
}