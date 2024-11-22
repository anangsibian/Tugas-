#include <iostream>
using namespace std;

int main() {
    float angka1, angka2, angka3;

    cout << "Masukkan angka pertama: ";
    cin >> angka1;
    cout << "Masukkan angka kedua: ";
    cin >> angka2;
    cout << "Masukkan angka ketiga: ";
    cin >> angka3;

    if (angka1 > angka2 && angka1 > angka3) {
        cout << "Angka terbesar adalah: " << angka1 << endl;
    } else if (angka2 > angka1 && angka2 > angka3) {
        cout << "Angka terbesar adalah: " << angka2 << endl;
    } else {
        cout << "Angka terbesar adalah: " << angka3 << endl;
    }

    return 0;
}
