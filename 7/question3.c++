#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        int a, b;
        cin >> a >> b;
        int num = a + b;
        int count = 1;
        while (true) {
            if (isPrime(num + count)) {
                cout << count << endl;
                break;
            }
            count++;
        }
    }
    return 0;
}
