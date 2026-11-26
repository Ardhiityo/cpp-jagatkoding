#include <iostream>
using namespace std;

void cetak(int value)
{
    if (value > 0)
    {
        cout << value << endl;
        value--;
        cetak(value);
    }
}

int main()
{
    cetak(5);
}