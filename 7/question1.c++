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

    vector<bool> isFullName(n, false);
    for(int j = 0; j < n; j++){
        int size = name[j].find(" ");
        bool found = false;
        for(int k = j + 1; k < n; k++){
            int size2 = name[k].find(" ");
            if(name[k].substr(0, size2) == name[j].substr(0, size)){
                found = true;
                isFullName[j] = true;
                isFullName[k] = true;
                break;
            }
        }
    }

    for(int j = 0; j < n; j++){
        int size = name[j].find(" ");
        if(isFullName[j]){
            cout << name[j] << endl;
        } else {
            cout << name[j].substr(0, size) << endl;
        }
    }

    return 0;
}
