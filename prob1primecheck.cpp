#include <iostream>
#include <cmath>

using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    // Prime numbers must be greater than 1
    if (n <= 1) {
        return false;
    }
    
    // 2 and 3 are prime
    if (n <= 3) {
        return true;
    }

    // Eliminate multiples of 2 and 3 for optimization
    if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }

    // Check factors from 5 up to sqrt(n)
    // We use i * i <= n instead of sqrt(n) for efficiency
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    long long n; // Using long long to safely handle the 10^9 range
    if (!(cin >> n)) return 0;

    if (isPrime(n)) {
        cout << "Prime" << endl;
    } else {
        cout << "Not Prime" << endl;
    }

    return 0;
}