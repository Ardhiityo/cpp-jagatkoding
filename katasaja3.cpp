#include <iostream>
using namespace std;

int main()
{
    int choice, qty;
    float total;

    cout << "Tersedia \t:" << endl;
    cout << "1. Roti \t: 5000/pcs" << endl;
    cout << "2. Susu \t: 4000/pcs" << endl;
    cout << "3. Shampoo \t: 500/pcs" << endl;
    cout << "4. Selesai" << endl;

    total = 0;

    do
    {
        cout << "Masukan kode \t\t: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Masukan quantity \t: ";
            cin >> qty;
            total += 5000 * qty;
            cout << "Roti " << qty << " Rp." << 5000 * qty << endl;
            break;
        case 2:
            cout << "Masukan quantity \t: ";
            cin >> qty;
            total += 4000 * qty;
            cout << "Susu " << qty << " Rp." << 4000 * qty << endl;
            break;
        case 3:
            cout << "Masukan quantity \t: ";
            cin >> qty;
            total += 500 * qty;
            cout << "Shampoo " << qty << " Rp." << 500 * qty << endl;
            break;
        case 4:
            cout << "Total Rp." << total << endl;
            break;
        default:
            cout << "Pilihan tidak tersedia" << endl;
            break;
        }
    } while (choice != 4);

    cout << "Terimakasih" << endl;
}