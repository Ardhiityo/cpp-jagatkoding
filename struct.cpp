#include <iostream>
using namespace std;

struct nilai
{
    int mtk;
    int english;
    int indo;
};

int main()
{
    nilai putra;
    nilai putri;

    putra.mtk = 50;
    putra.english = 75;
    putra.indo = 85;
    
    putri.mtk = 55;
    putri.english = 80;
    putri.indo = 90;

    cout << "Putra mtk \t: " << putra.mtk << endl;
    cout << "Putra english \t: " << putra.english << endl;
    cout << "Putra indo \t: " << putra.indo << endl;

    cout << "Putri mtk \t: " << putri.mtk << endl;
    cout << "Putri english \t: " << putri.english << endl;
    cout << "Putri indo \t: " << putri.indo << endl;
}