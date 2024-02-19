#include<iostream>
using namespace std;
int main(){
    cout<<"enter length of the pattren:";
    int n;
    cin>>n;
    for(int i=n;i>0;i--){
        int k=i;
        while(k!=n){
            cout<<"*";
            k++;
        }
       
        for(int j=1;j<=i;j++){
             cout<<i;
        }
        cout<<endl;
    }
    return 0;
}