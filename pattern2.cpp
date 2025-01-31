#include <iostream>
using namespace std;

void printPattern(int n) {
    if (n < 3 || n % 2 == 0) {
        cout << "Please enter an odd number greater than or equal to 3.\n";
        return;
    }

    int mid = n / 2;
    
    for (int i = 0; i < n; i++) {
        // Left *
        cout << "*";

        // Left spaces
        if (i != mid)
            cout << string(mid, ' ');
        else
            cout << string(mid, 'e');

        // Middle *****
        cout << "*****";

        // Right spaces
        if (i != mid)
            cout << string(mid, ' ');
        else
            cout << string(mid, 'e');

        // Right *
        cout << "*";

        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter an odd number (>=3): ";
    cin >> n;
    printPattern(n);
    return 0;
}
