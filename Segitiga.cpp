#include <iostream>
using namespace std;

int main() {
    int height;
    cout << "Masukkan tinggi segitiga: ";
    cin >> height;

    // Loop untuk baris
    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= height - i; j++) {
            cout << " ";
        }

        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
