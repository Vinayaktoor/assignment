#include<iostream>
using namespace std;
void reverse(int l,int u){
     if((u)%2!=0) { cout<<u<<",";}
      if(l>u){
        return;
    }


    reverse(l,u-1);
   
}
int main(){
    int a,b;
    cout<<"enter lower bond:";
    cin>>a;
    cout<<"enter upper bond:";
    cin>>b;
    reverse(a,b);
    return 0;
}
