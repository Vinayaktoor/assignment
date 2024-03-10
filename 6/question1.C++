#include<iostream>
using namespace std;
int main(){
    int test;
    cout<<"nunber of test cases:";
    cin>> test;
    while(test--){
        int ele;
        cout<<"Enter element:";
        cin>> ele;
        bool prime=true;
        for(int i=2;i<=9;i++){
            if(ele%i==0){
                prime=false;
            }
        }
        if(prime==false){
            cout<<"no"<<endl;
        }
        else{
            cout<<"yes"<<endl;
        }
    }
    return 0;
}