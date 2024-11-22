#include <iostream>
#include <vector>
using namespace std;


bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}


vector<int> getFactors(int n) {
    vector<int> factors;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            factors.push_back(i);
        }
    }
    return factors;
}

int main() {
    int limit;
    cout << "Masukkan batas angka: ";
    cin >> limit;

    vector<int> oddNumbers, evenNumbers, primeNumbers;
    int oddCount = 0, evenCount = 0, primeCount = 0;

    for (int i = 1; i <= limit; i++) {
        if (i % 2 == 0) {
            evenNumbers.push_back(i);
            evenCount++;
        } else {
            oddNumbers.push_back(i);
            oddCount++;
        }

        if (isPrime(i)) {
            primeNumbers.push_back(i);
            primeCount++;
        }
    }


    cout << "\nBilangan Ganjil: \n";
    for (int n : oddNumbers) {
        cout << n << " (Faktor: ";
        vector<int> factors = getFactors(n);
        for (int f : factors)
            cout << f << " ";
        cout << ")\n";
    }
    cout << "Total bilangan ganjil: " << oddCount << endl;


    cout << "\nBilangan Genap: \n";
    for (int n : evenNumbers) {
        cout << n << " (Faktor: ";
        vector<int> factors = getFactors(n);
        for (int f : factors)
            cout << f << " ";
        cout << ")\n";
    }
    cout << "Total bilangan genap: " << evenCount << endl;


    cout << "\nBilangan Prima: \n";
    for (int n : primeNumbers) {
        cout << n << " (Faktor: ";
        vector<int> factors = getFactors(n);
        for (int f : factors)
            cout << f << " ";
        cout << ")\n";
    }
    cout << "Total bilangan prima: " << primeCount << endl;

    return 0;
}
