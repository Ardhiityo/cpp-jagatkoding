#include <iostream>
using namespace std;

int main()
{
    // t : tinggi
    // a : alas
    // l : luas
    float t, a, l;
    
    cout << "Masukan alas \t: ";
    cin >> a;
    
    cout << "Masukan tinggi \t: ";
    cin >> t;
    
    l = (a * t) / 2;

    cout << "(" << a << "x" << t << ")" << "/2" << "= " << l;
}