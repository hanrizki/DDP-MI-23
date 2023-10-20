
#include <iostream>
using namespace std;

int main()
{
    int n, o, a;
    cin >> n >> o >> a;
    for (int i = n; i >= o; i += a)
    {
        cout << i << " ";
    }
    return 0;
}