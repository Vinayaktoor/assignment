#include <iostream>
using namespace std;

int main() {
    int M, N;
    cin >> M >> N;

    int candiesA = 0, candiesB = 0;
    bool awin = false, bwin = false;

    for (int i = 1; ; i++) {
        if (i % 2 != 0) {
            candiesA += i;
            if (candiesA >= M) {
                awin = true;
                break;
            }
        } else {
            candiesB += i;
            if (candiesB >= N) {
                bwin = true;
                break;
            }
        }
    }

    if (awin && !bwin) {
        cout << "A";
    } else if (!awin && bwin) {
        cout << "B";
    }

    return 0;
}
