#include <iostream>
using namespace std;

int main() {
    int n, t1 = 0, t2 = 1, nextTerm = 0;
    cout << "Masukkan jumlah bilangan Fibonacci yang ingin ditampilkan: ";
    cin >> n;

    cout << "Deret Fibonacci: ";

    for (int i = 1; i <= n; ++i) {
        if (i == 1) {
            cout << t1 << " ";
            continue;
        }
        if (i == 2) {
            cout << t2 << " ";
            continue;
        }
        nextTerm = t1 + t2;
        cout << nextTerm << " ";
        t1 = t2;
        t2 = nextTerm;
    }

    return 0;
}