#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"NO. of elemnt you want to test :";
    cin>> n;
    while(n--){
        int A;
        cout<<"Enter element : ";
        cin>> A;
        bool prime=true;
        for(int i=2;i<A;i++){
            if(A%i==0){
                prime=false;}
        }
        if(prime==false){
            cout<<"no"<<endl;}
        else{
            cout<<"yes"<<endl;}
    }
    return 0;
}
