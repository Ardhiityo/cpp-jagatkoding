#include <iostream>
#include <math.h> // pow, sqrt
#include <stdlib.h> // rand

namespace bilangan
{
    void cetak(int value)
    {
        std::cout << value << std::endl;
    }
}

namespace huruf
{
    void cetak(std::string value)
    {
        std::cout << value << std::endl;
    }
}

using namespace bilangan;
using namespace huruf;
int main()
{
    cetak("Hello");
    cetak(25);

    // pangkat
    std::cout << pow(7, 2) << std::endl; // 49

    // akar kudrat
    std::cout << sqrt(49) << std::endl; // 7

    // angka random
    /* initialize random seed: */
    srand(time(NULL));

    std::cout << "time " << time(NULL) << std::endl;

    std::cout << rand() % 10 + 1 << std::endl;
}