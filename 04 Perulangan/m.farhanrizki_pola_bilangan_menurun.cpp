#include <iostream>
using namespace std;

int main()
{
    int u, l, y;
    cin >> u >> l >> y;
    for (int i = u; i >= l; i += y)
    {
        cout << i << " ";
    }
    return 0;
}