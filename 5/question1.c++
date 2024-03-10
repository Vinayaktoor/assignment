#include<iostream>
using namespace std;
int main(){
    int sdnt[50];
    cout<<"Enter no. of students:";
    int n;
    cin>> n;
     cout<<"Enter marks of each students:";
    for(int i=0;i<n;i++){
     cin>> sdnt[i];
    }
    cout<<"Enter the marks of X:";
    int pos,mks;
    cin>>mks;
    cout<<"enter position:";
    cin>> pos;
    int current,prev;
    for (int i = pos-1; i < n+1; i++)
    {
       current=sdnt[i];
       if(i==pos-1){
        prev=mks;
       }
       sdnt[i]=prev;
       prev=current;        
    }
    for(int i =0;i<n+1;i++){
        cout<<sdnt[i]<<" ";
    }
    
    return 0;
}