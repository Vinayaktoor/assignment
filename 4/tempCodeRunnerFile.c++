#include<iostream>
using namespace std;
int main(){
    // cout<<"enter length of the pattren:";
    int n;
    // cin>>n;
    n=5;
    for(int i=1;i<=n;i++){
       
        
        for(int j=1;j<=i;j++){
          
            // for(int k=n-i;k>0;k--){
            //     cout<<" ";
            // }
            if(i%2!=0){
                cout<<"*";
            }
           
        }
        cout<<endl;
    }
    return 0;
}