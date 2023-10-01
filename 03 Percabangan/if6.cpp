#include <iostream>
using namespace std;

int main()
{
    int nominal;
    cin >> nominal;

    if (nominal >= 0)
    {
        if (nominal % 2 == 0)
        {
            cout << "Positif Genap";
        }
        else
        {
            cout << "Positif Ganjil";
        }
    }
    else
    {
        cout << "Negatif";
    }
}
