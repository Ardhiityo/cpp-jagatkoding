#include <iostream>
#include <string>
using namespace std;

//bisa dengan parameter, namun tanpa return
void siswa()
{
    string name = "Alex";
    int age = 15;

    cout << name << " " << age << endl;
}

string siswi()
{
    string name = "Alexa";
    int age = 14;

    return (name + " " + std::to_string(age));
}

int main()
{
    // procedure
    siswa();

    // fungsi
    cout << siswi();
}