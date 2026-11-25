#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    const int array_length = 5;
    string items[array_length];
    int index = -1;
    int choice, choice_item;
    string new_item;

    do
    {
        std::cout << "Pilihan" << endl;
        std::cout << "1. Tambah" << endl;
        std::cout << "2. Ubah" << endl;
        std::cout << "3. Selesai" << endl;
        std::cout << "Input pilihan \t: ";
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            if (index < array_length - 1)
            {
                index++;
                std::cout << "Masukan nama barang \t: ";
                std::cin >> items[index];
                system("cls");
                std::cout << "Isi keranjang saat ini: \t: " << endl;
                for (int i = 0; i < array_length; i++)
                {
                    std::cout << i + 1 << ". " << items[i] << endl;
                }
                std::cout << "===============================" << endl;
            }
            else
            {
                system("cls");
                std::cout << "Keranjang penuh" << endl;
                std::cout << "===================" << endl;
                std::cout << "Isi keranjang saat ini: \t: " << endl;
                for (int i = 0; i < array_length; i++)
                {
                    std::cout << i + 1 << ". " << items[i] << endl;
                }
                std::cout << "===============================" << endl;
            }
            break;
        case 2:
            system("cls");
            std::cout << "Isi keranjang saat ini: \t: " << endl;
            for (int i = 0; i < array_length; i++)
            {
                std::cout << i + 1 << ". " << items[i] << endl;
            }
            std::cout << "===============================" << endl;
            std::cout << "Pilih data yang diubah \t: ";
            std::cin >> choice_item;
            std::cout << "Index awal \t: " << items[choice_item - 1] << endl;
            std::cout << "Index baru \t: ";
            std::cin >> new_item;
            items[choice_item - 1] = new_item;
            std::cout << "Isi keranjang saat ini: \t: " << endl;
            for (int i = 0; i < array_length; i++)
            {
                std::cout << i + 1 << ". " << items[i] << endl;
            }
            std::cout << "===============================" << endl;
            break;
        case 3:
            choice = 3;
            break;
        default:
            break;
        }
    } while (choice != 3);

    std::cout << "Program selesai" << endl;
}