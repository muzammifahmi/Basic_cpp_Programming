#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "Masukkan tinggi segitiga: ";
    cin >> a;

    ;

    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        for (int k = i; k < a; k++)
        {
            cout << " ";
        }
        for (int l = i; l <= a; l++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 1; i <= a; i++)
    {	
        for (int j = a; j >= i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
