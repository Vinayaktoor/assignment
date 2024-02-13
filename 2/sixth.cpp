#include<iostream>
using namespace std;
int sum(int a){
    if(a<0){
        return 0;
    }
    int temp = 0;
    temp = temp + a;
    return temp + sum(a-1); 
}
int main(){
    int n;
   cout<<"enter the nth number to get the sum:";
   cin>>n;
    int x = sum(n);
    cout<<x;

    
    return 0;
}