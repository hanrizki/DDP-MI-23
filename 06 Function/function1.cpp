#include <iostream>
using namespace std;

void myFunction()
{
    cout << "I just got executed!" << endl;
}

void myFunction2(string name = "Haris", int umur = 13)
{
    cout << "Nama saya : " << name << " umur saya : " << umur << endl;
}

int myFunction3(int x)
{
    return 5 + x;
}

int main()
{
    myFunction();
    myFunction();
    myFunction();

    myFunction2("Haris");
    myFunction2("Andi", 12);
    myFunction2("Budi", 15);
    myFunction2("Charlie", 29);

    cout << myFunction3(17) << endl;
    cout << myFunction3(29) << endl;
    cout << myFunction3(30) << endl;

    int value1 = myFunction3(18);
    cout << value1 << endl;

    return 0;
}