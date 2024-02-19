#include<iostream>
using namespace std;
int main(){
    cout<<"enter length of the pattren:";
    int n;
    cin>>n;
    for(int i=n;i>0;i--){
        for(int j=1;j<=i;j++){
             cout<<"1";
        }
        cout<<endl;
    }
    return 0;
}