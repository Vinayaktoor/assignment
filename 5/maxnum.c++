#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> arr = {"3", "30", "34", "5", "9"};

    for (int i = 0; i < arr.size() - 1; i++) {
        for (int j = 0; j < arr.size() - 1 - i; j++) {
            if ((arr[j] + arr[j + 1]) < (arr[j + 1] + arr[j])) {
                string temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i];
    }

    return 0;
}
