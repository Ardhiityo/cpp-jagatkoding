#include <iostream>
using namespace std;

int main()
{
    const float phi = 3.14;
    int r;
    double l;

    cout << "input jari-jari lingkaran \t: ";
    cin >> r;

    l = phi * r * r;

    cout << "Luas jari-jari lingkaran adalah " << l << "cm";
}