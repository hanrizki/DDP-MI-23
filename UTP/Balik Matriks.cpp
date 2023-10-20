#include <iostream>
using namespace std;

int main()
{
    int h, r;
    cin >> h >> r;
    int matriks[h][r];
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < r; j++)
        {
            cin >> matriks[i][j];
        }
    }
    for (int i = h - 1; i >= 0; i--)
    {
        for (int j = r - 1; j >= 0; j--)
        {
            cout << matriks[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}