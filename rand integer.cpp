#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    string is_continue;

    do
    {
        system("cls");

        srand(time(NULL));

        cout << rand() % 10 +1 << endl;

        cout << "Lanjutkan (y/n) \t: ";
        cin >> is_continue;

    } while (is_continue == "y");
}