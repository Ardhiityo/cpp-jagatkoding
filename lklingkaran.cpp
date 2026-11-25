#include <iostream>
using namespace std;

float calculate_total(int r, string type)
{
    const float phi = 3.14;

    if (type == "luas")
    {
        return phi * (r * r);
    }
    else if (type == "keliling")
    {
        return 2 * phi * r;
    }
    else
    {
        return 0;
    }
}

void display_result(int r)
{
    cout << "Luas" << endl;
    cout << "L = 3.14 x r x r" << endl;
    cout << "L = 3.14" << " x " << r << " x " << r << endl;
    cout << "L = " << calculate_total(r, "luas") << endl;

    cout << "Keliling" << endl;
    cout << "K = 2 x 3.14 x r" << endl;
    cout << "K = 2 x 3.14" << " x " << r << endl;
    cout << "K = " << calculate_total(r, "keliling") << endl;
}

int main()
{
    int r;
    string is_continue;

    do
    {
        cout << "Masukan r \t: ";
        cin >> r;

        display_result(r);

        cout << "Lanjutkan (y/n) \t: ";
        cin >> is_continue;
    } while (is_continue == "y");
}