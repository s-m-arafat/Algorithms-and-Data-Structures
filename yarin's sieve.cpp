//Auth:Shakil Mahmud Arafat -arft666, AUST, Dept. of EEE
#include <bits/stdc++.h>

using namespace std;

void yarins_sieve(int limit) {
    vector<bool> is_prime(limit + 1, true); // initialize all numbers as prime
    int sqrt_limit = sqrt(limit);
    for (int p = 2; p <= sqrt_limit; p++) {
        if (is_prime[p]) {
            // mark all multiples of p as composite
            for (int i = p * p; i <= limit; i += p) {
                is_prime[i] = false;
            }
        }
    }
    // print all prime numbers
    for (int p = 2; p <= limit; p++) {
        if (is_prime[p]) {
            cout << p << " ";
        }
    }
}


//driver code
int main() {
    int limit;
    cout << "Enter the limit: ";
    cin >> limit;
    cout << "The prime numbers up to " << limit << " are: ";
    yarins_sieve(limit);
    return 0;
}

