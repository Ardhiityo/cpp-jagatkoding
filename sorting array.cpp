#include <iostream>
using namespace std;

int main()
{
    int values[] = {2, 10, 3, 4, 1, 8, 7, 5, 9, 6, 100, 4};
    int array_length = sizeof(values) / sizeof(*values);
    int value, prev, current;

    //sortir dari kiri ke kanan
    for (int i = 0; i < array_length; i++)
    {
        if (i > 0)
        {
            if (values[i] < values[i - 1])
            {
                value = values[i - 1];
                values[i - 1] = values[i];
                values[i] = value;
            }
        }
    }
    
    //sortir dari kanan ke kiri
    for (int h = array_length - 1; h >= 0; h--)
    {
        if (h > 0)
        {
            if (values[h - 1] > values[h])
            {
                current = values[h];
                prev = values[h - 1];
                values[h] = prev;
                values[h - 1] = current;
            }
        }
    }

    for (int j = 0; j < array_length; j++)
    {
        cout << values[j] << endl;
    }
}