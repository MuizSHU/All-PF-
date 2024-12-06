#include <iostream>
using namespace std;

int main() {
    int n = 5;

    // Using outer loop for each row
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i; j++) {
            cout << " ";
        }

        for (int j = 1; j <= i; j++) {
            cout << char('A' + j - 1);
        }

        for (int j = i - 1; j >= 1; j--) {
            cout << char('A' + j - 1); 
        }

        cout << endl;
    }

    return 0;
}
