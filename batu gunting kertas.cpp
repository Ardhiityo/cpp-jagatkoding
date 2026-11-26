#include <iostream>
#include <stdlib.h> // srand, rand
#include <time.h>   //time
using namespace std;

string result(string choice, string enemy)
{
    if (choice == "batu")
    {
        if (enemy == "batu")
        {
            return "Kamu seri";
        }
        else if (enemy == "gunting")
        {
            return "Kamu menang";
        }
        else if (enemy == "kertas")
        {
            return "Kamu kalah";
        }
    }
    else if (choice == "gunting")
    {
        if (enemy == "batu")
        {
            return "Kamu kalah";
        }
        else if (enemy == "gunting")
        {
            return "Kamu seri";
        }
        else if (enemy == "kertas")
        {
            return "Kamu menang";
        }
    }
    else if (choice == "kertas")
    {
        if (enemy == "batu")
        {
            return "Kamu menang";
        }
        else if (enemy == "gunting")
        {
            return "Kamu kalah";
        }
        else if (enemy == "kertas")
        {
            return "Kamu seri";
        }
    }
    return "Terjadi kesalahan";
}

int generate_rand()
{
    srand(time(NULL));
    return rand() % 2 + 1;
}

void display_result(string choices[3], int choice)
{
    int enemy = generate_rand();

    cout << "======================================" << endl;
    cout << "Pilihanmu \t: " << choice << endl;
    cout << "Lawanmu \t: " << enemy << endl;
    cout << "======================================" << endl;
    cout << "Pilihanmu \t: " << choices[choice] << endl;
    cout << "Lawanmu \t: " << choices[enemy] << endl;
    cout << "======================================" << endl;

    cout << result(choices[choice], choices[enemy]) << endl;
}

int main()
{
    string choices[3] = {"batu", "gunting", "kertas"};
    int choice;
    string is_continue;

    do
    {
        system("cls");

        for (int i = 1; i <= 3; i++)
        {
            cout << i << ". " << choices[i - 1] << endl;
        }

        cout << "Masukan pilihan \t: ";
        cin >> choice;

        display_result(choices, choice - 1);

        cout << "Lanjutkan (y/n) \t: ";
        cin >> is_continue;
    } while (is_continue == "y");
}