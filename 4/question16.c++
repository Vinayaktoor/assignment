#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter length of pattern: ";
    cin >> n;

    for (int i = 1; i<=n; i++) {
        for (int k = n; k > i; k--) {
            cout << " ";
        }
        for (int j = 0; j < i; j++) {
            if (i % 2 != 0) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
     for (int i = n-1; i>0; i--) {
        int k=i;
       while(k!=n) {
            cout << " ";
            k++;
        }
        for (int j = 0; j < i; j++) {
            if (i % 2 != 0) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }


         return 0;
}
