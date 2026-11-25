#include <iostream>
using namespace std;

int main()
{
    // 1 nilai int  = 4 byte
    int values[3][2] = {3, 5, 1, 6, 2, 8};
    
    // 6x4 = 24 (sizeof(values))
    // 1 row berisi 2 data, 4x2 = 8 (sizeof(values[0]))
    int row_length = sizeof(values) / sizeof(values[0]); // 24/8= 3
    
    // 1 row berisi 2 data, 4x2 = 8 (sizeof(values[0]))
    // 1 nilai int = 4 byte
    int col_length = sizeof(values[0]) / sizeof(values[0][0]); // 8/4= 2;

    for (int i = 0; i < row_length; i++)
    {
        for (int j = 0; j < col_length; j++)
        {
            cout << values[i][j] << " ";
        }
        cout << endl;
    }
}