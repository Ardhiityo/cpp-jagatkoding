#include <iostream>
using namespace std;

int main()
{
    int start, end;

    cout << "Nilai awal \t: ";
    cin >> start;

    cout << "Nilai akhir \t: ";
    cin >> end;

    // increment
    while (start <= end)
    {
        cout << "Angka ke-" << start << endl;
        start++;
    }

    // decrement
    while (start >= end)
    {
        cout << "Angka ke-" << start << endl;
        start--;
    }
}