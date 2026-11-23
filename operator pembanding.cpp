#include <iostream>
using namespace std;

int main()
{
    int x = 8;
    int y = 10;
    string hasil;

    hasil = x != y ? (std::to_string(x) + " tidak sama dengan " + std::to_string(y)) : (std::to_string(x) + " sama dengan " + std::to_string(y));
    cout << hasil;

    hasil = x == y ? (std::to_string(x) + " sama dengan " + std::to_string(y)) : (std::to_string(x) + " tidak sama dengan " + std::to_string(y));
    cout << hasil;

    hasil = x < y ? (std::to_string(x) + " kurang dari " + std::to_string(y)) : (std::to_string(x) + " lebih dari " + std::to_string(y));
    cout << hasil;

    hasil = x > y ? (std::to_string(x) + " lebih dari " + std::to_string(y)) : (std::to_string(x) + " kurang dari " + std::to_string(y));
    cout << hasil;

    hasil = x >= y ? (std::to_string(x) + " lebih dari sama dengan " + std::to_string(y)) : (std::to_string(x) + " kurang dari sama dengan " + std::to_string(y));
    cout << hasil;

    hasil = x <= y ? (std::to_string(x) + " kurang dari sama dengan " + std::to_string(y)) : (std::to_string(x) + " lebih dari sama dengan " + std::to_string(y));
    cout << hasil;
}