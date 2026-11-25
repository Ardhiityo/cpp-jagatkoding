#include <iostream>
using namespace std;

float calculate_sisi(int s, string choice)
{
    if (choice == "l")
    {
        return s * s;
    }
    else if (choice == "k")
    {
        return 4 * s;
    }
    else
    {
        return 0;
    }
}

void print_sisi(int s)
{
    cout << "Luas persegi" << endl;
    cout << "s x s" << endl;
    cout << s << " x " << s << endl;
    cout << "Total luas persegi " << calculate_sisi(s, "l") << endl;

    cout << "========================" << endl;

    cout << "Keliling persegi" << endl;
    cout << "4 x s" << endl;
    cout << "4" << " x " << s << endl;
    cout << "Total keliling persegi " << calculate_sisi(s, "k") << endl;
}

int main()
{
    int s;
    string is_continue;

    do
    {
        cout << "Masukan sisi \t: ";
        cin >> s;

        print_sisi(s);

        cout << "Lanjut (y/n) \t";
        cin >> is_continue;

    } while (is_continue == "y");

    cout << "Selesai" << endl;
}