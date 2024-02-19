#include<iostream>
using namespace std;
int main(){

    cout<<"enter length of the pattren:";
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){

        for(int j=1;j<=n;j++){

            if(i%2==0){cout<<i;}
            else cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}