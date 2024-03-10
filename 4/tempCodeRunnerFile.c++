#include<iostream>
using namespace std;
int main(){
    cout<<"enter length of the pattren:";
    int n;
    cin>>n;
    for(int i=n;i>0;i--){
       int k=n-i;
            while (k!=0){
                k--;
                cout<<" ";
            }
        
        for(int j=1;j<=i;j++){
           
           
            
             cout<<"1";
        }
        cout<<endl;
    }
    return 0;
}