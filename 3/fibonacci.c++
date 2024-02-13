#include<iostream>
using namespace std;

void fibonacci(int n, int& first, int& second) {
    if (n <= 0) {
        return;
    }

    int sum = first + second;
    cout << sum << " ";
    first = second;
    second = sum;

    fibonacci(n - 1, first, second);
}

int main() {
    int terms;
    cout << "Enter number of terms: ";
    cin >> terms;

    if (terms <= 0) {
        cout << "Invalid input!";
        return 0;
    }

    int first = 0, second = 1;
    if (terms == 1) {
        cout << first;
    } else if (terms == 2) {
        cout << first << " " << second;
    } else {
        cout << first << " " << second << " ";
        fibonacci(terms - 2, first, second);
    }

    return 0;
}
