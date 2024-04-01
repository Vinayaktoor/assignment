#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore(); 

    string name[n];
    for(int i = 0; i < n; i++){
        getline(cin, name[i]);
    }

    for(int j = 0; j < n; j++){
        int size = name[j].find(" ");
        bool found = false;
        for(int k = j + 1; k < n; k++){
            int size2 = name[k].find(" ");
            if(name[k].substr(0, size2) == name[j].substr(0, size)){
                found = true;
                name[k]=name[k].substr(0, size2);
                break;
            }
        }
        if (found) {
            cout << name[j] << endl;
        } else {
            cout << name[j].substr(0, size) << endl;
        }
    }

    return 0;
}
