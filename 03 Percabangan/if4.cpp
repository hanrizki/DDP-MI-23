#include <iostream>
using namespace std;

int main()
{
    int nominal;
    cin >> nominal;

    if (nominal % 2 == 0)
    {
        cout << "Genap";
    }
    else
    {
        cout << "Ganjil";
    }
}