#include <iostream>
using namespace std;

int main()
{
    int tarif;
    cin >> tarif;

    if (tarif >= 0)
    {
        if (tarif % 2 == 0)
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
