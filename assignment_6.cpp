#include <iostream>
#include <fstream>
using namespace std;

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i < num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int primeCount() {
    fstream file;
    int num, count = 0;
    file.open("NUMS.TXT", ios::in);
    if (file.is_open()) {
        while (file >> num) {
            if (isPrime(num)) count++;
        }
        file.close();
    }
    return count;
}

int main() {
    
    fstream file;
    file.open("NUMS.TXT", ios::out);
    if (file.is_open()) {
        file << 1 << "\n";
        file << 2 << "\n";
        file << 3 << "\n";
        file << 4 << "\n";
        file << 5 << "\n";
        file << 6 << "\n";
        file.close();
    }

    cout << "Number of Primes: " << primeCount();

    return 0;
}