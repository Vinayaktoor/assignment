#include<iostream>
using namespace std;
int main(){
    cout<<"enter length of the pattren:";
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int space=n-i;space>0;space--){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
             cout<<j;
        }
        cout<<endl;
    }
    return 0;
}