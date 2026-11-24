#include <iostream>
using namespace std;

int main()
{
    int start;
    int end;

    cout << "Angka mulai \t: " << endl;
    cin >> start;

    cout << "Angka selesai \t: " << endl;
    cin >> end;

    if (end < start)
    {
        cout << "Angka selesai tidak boleh kurang dari angka mulai" << endl;
        return 0;
    }

    for (int i = start; i <= end; i++)
    {
        cout << "Angka ke-" << i << endl;
    }
}