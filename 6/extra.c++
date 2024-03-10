#include <iostream>
using namespace std;

bool check_prime(int n, int i = 2) {
    if (n <= 1) return false;
    if (i * i > n) return true;
    if (n % i == 0) return false;
    return check_prime(n, i + 1);
}

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;
    if (check_prime(num))
        cout << num << " is a prime number.";
    else 
        cout << num << " is not a prime number.";
    return 0;
}