#include <iostream>
using namespace std;

int main()
{
    int nmb;
    cin >> nmb;

    if (nmb >= 0 && nmb <= 9)
    {
        cout << "Satuan";
    }
    else if (nmb >= 10 && nmb <= 99)
    {
        cout << "Puluhan";
    }
    else if (nmb >= 100 && nmb <= 999)
    {
        cout << "Ratusan";
    }
    else
    {
        cout << "Tidak Tahu";
    }
}