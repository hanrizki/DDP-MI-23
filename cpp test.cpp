#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Input banyak nya perulangan : ";
    cin >> n = 5;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " adalah bilangan genap\n"
        }
        else
        {
            cout << i << " adalah bilangan ganjil\n"
        }
    }
}