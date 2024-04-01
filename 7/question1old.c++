#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore(); 

    string name[n];
    for(int i = 0; i < n; i++){
        getline(cin, name[i]);
    }

    string output[n];
    for(int j = 0; j < n; j++){
        int size = name[j].find(" ");
        bool found = false;
        for(int k = j + 1; k < n; k++){
            int size2 = name[k].find(" ");
            if(name[k].substr(0, size2) == name[j].substr(0, size)){
                output[j] = name[j];
                output[k] = name[k];
                found = true;
                j++;
                break;
            }
        }
        if (!found) {
            output[j] = name[j].substr(0, size);
        }
    }

    for (int i = 0; i < n; i++) {
        cout << output[i] << endl;
    }

    return 0;
}