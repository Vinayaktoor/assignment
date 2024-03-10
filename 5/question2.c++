#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of records:";
    cin>> n;
    int eply[n+1];
    cout<<"Enter IDs of all"<<n<<"Employees:";
    for(int i=0;i<n;i++){
        cin>> eply[i];
    }
    int vidhan;
    cout<<"Enter the ID of newly admitted employee:";
    cin>> vidhan;
    eply[n]=vidhan;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(eply[j]>eply[j+1]){
                int temp=eply[j+1];
                eply[j+1]=eply[j];
                eply[j]=temp;
            }
        }
       
    }
    for(int i=0;i<n+1;i++){
        cout<<eply[i]<<" ";
    }
    return 0;
}