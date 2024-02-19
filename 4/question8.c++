#include<iostream>
using namespace std;
int main(){
    cout<<"enter length of the pattren:";
    int n;
    cin>>n;
    for(int i=n;i>0;i--){
        for(int j=1;j<=i;j++){
            char alp=64+j;
             cout<<alp;
        }
        cout<<endl;
    }
    return 0;
}