#include <iostream>
using namespace std;

int main()
{
    int values[] = {10, 22, 12, 13, 14, 15};

    int array_length = sizeof(values) / sizeof(*values);

    for (int i = 0; i < array_length; i++)
    {
        cout << values[i] << endl;
    }
}