#include <iostream>
using namespace std;
int main()
{

    for (int i = 0; i < 5; i++)
    {
        cout << "*";
    }
    cout << "\n";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (j == 0 || j == 4)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }

    for (int i = 0; i < 5; i++)
    {
        cout << "*";
    }

    return 0;
}