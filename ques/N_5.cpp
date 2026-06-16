#include <iostream>
using namespace std;

int main() {

    for (int i = 0; i < 3; i++) {

        for (int j = 0; j < i; j++)
            cout << " ";

        for (int j = 0; j < 5 - 2 * i; j++)
            cout << i + 3 << " ";

        cout << endl;
    }

    for (int i = 1; i >= 0; i--) {

        for (int j = 0; j < i; j++)
            cout << " ";

        for (int j = 0; j < 5 - 2 * i; j++)
            cout << i + 3 << " ";

        cout << endl;
    }

    return 0;
}