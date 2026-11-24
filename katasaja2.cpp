#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int choice;
    int choice_quantity;
    double total;
    string is_continue;

    /**
     roti = 5000;
     susu = 4000;
     shampoo = 500;
     */

    vector<int> cart;
    vector<int> quantity;

    do
    {
        cout << "Tersedia:" << endl;
        cout << "Roti 5000/pcs : 1" << endl;
        cout << "Susu 4000/pcs : 2" << endl;
        cout << "Shampoo 500/pcs : 3" << endl;

        cout << "Ketik angka untuk memilih barang \t: ";
        cin >> choice;

        cout << "Jumlah quantity \t: ";
        cin >> choice_quantity;

        cart.push_back(choice);
        quantity.push_back(choice_quantity);

        cout << "Ingin melanjutkan belanja (y/n)\t: ";
        cin >> is_continue;

    } while (is_continue == "y");

    total = 0;

    for (int product = 0; product < cart.size(); product++)
    {
        if (cart[product] == 1)
        {
            total += 5000 * quantity[product];
        }
        else if (cart[product] == 2)
        {
            total += 4000 * quantity[product];
        }
        else if (cart[product] == 3)
        {
            total += 500 * quantity[product];
        }
    }

    cout << "Total belanja " << total << endl;
}