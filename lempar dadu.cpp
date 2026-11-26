#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int player, enemy, choice;
    string is_continue;

    do
    {
        cout << "Pilihan" << endl;
        cout << "1. Lempar dadu" << endl;
        cout << "2. Selesai" << endl;
        cout << "Masukan kode pilihan \t: ";
        cin >> choice;

        if (choice == 1)
        {
            srand(time(NULL));
            player = rand() % 6 + 1;
            enemy = rand() % 6 + 1;

            cout << "Player \t: " << player << endl;
            cout << "Enemy \t: " << enemy << endl;

            if (player < enemy)
            {
                cout << "Kamu kalah" << endl;
            }
            else if (player > enemy)
            {
                cout << "Kamu menang" << endl;
            }
            else
            {
                cout << "Seri" << endl;
            }

            cout << "Lanjutkan (y/n) \t: ";
            cin >> is_continue;
        }
        else
        {
            is_continue = "n";
        }

    } while (is_continue == "y");
}