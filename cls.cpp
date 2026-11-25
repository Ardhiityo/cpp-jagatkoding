#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    string name, nim, choice;

    do
    {
        cout << "Masukan Nama \t: ";
        getline(cin, name);
        
        cout << "Masukan NIM \t: ";
        getline(cin, nim);
        
        system("cls");
        
        cout << "Nama saya " << name << " Nim saya " << nim << endl;
        
        cout << "Lanjut (y/n) \t: ";
        cin >> choice;
        
        cin.ignore(1000, '\n');

    } while (choice == "y");
}