#include<iostream>
using namespace std;
 bool numnature(int n){
        bool prime=true;
        for(int i=2;i<=9;i++){
          if(n%i==0 && i!=n){
            prime=false;
          }

        }
        return prime;
    }
int main(){
    cout<<"Enter number of elements:";
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
       
    }
    cout<<"Prime no.:";
     for(int i=0;i<n;i++){
        if(arr[i]==1){
            continue;
        }
        if(numnature(arr[i])==true){
            cout<<arr[i]<<",";
        }
    }

     cout<<endl<<"composite no.:";
     for(int i=0;i<n;i++){
        if(arr[i]==1){
            continue;
        }
        if(numnature(arr[i])==false){
            cout<<arr[i]<<",";
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            cout<<arr[i]<<",";
        }
    }
     cout<<endl;
    for(int i=0;i<n;i++){
        if(arr[i]%3==0){
            cout<<arr[i]<<",";
        }
    }
     cout<<endl;
    for(int i=0;i<n;i++){
        if(arr[i]%5==0){
            cout<<arr[i]<<",";
        }
    }
    return 0;
}