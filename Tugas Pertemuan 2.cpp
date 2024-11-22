#include <iostream>

int main() {
    int firstValue = 10;
    int secondValue = 8;

    // Menukar nilai tanpa menggunakan variabel tambahan
    firstValue = firstValue + secondValue;
    secondValue = firstValue - secondValue;
    firstValue = firstValue - secondValue;

    std::cout << "Nilai firstValue setelah ditukar: " << firstValue << std::endl;
    std::cout << "Nilai secondValue setelah ditukar: " << secondValue << std::endl;

    return 0;
}
