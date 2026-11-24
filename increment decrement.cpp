#include <iostream>
using namespace std;

int main()
{
    int value;

    value = 5;
    cout << "Pre increment" << endl;
    cout << ++value << endl; // 6
    cout << ++value << endl; // 7
    cout << value << endl;   // 7
    cout << "======" << endl;
    value = 5;
    cout << "Post increment" << endl;
    cout << value++ << endl; // 5
    cout << value++ << endl; // 6
    cout << value << endl;   // 7
}