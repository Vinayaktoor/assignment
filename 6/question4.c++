#include<iostream>
using namespace std;
int main(){
int num[10];
cout<<"Enter numbers:";
for(int i=0;i<10;i++){
   cin>>num[i];
}
cout<<"Positive numbers:";
for(int i=0;i<10;i++){
  if(num[i]>0) {cout<<num[i]<<",";}
}
cout<<endl<<"Negative numbers:";
for(int i=0;i<10;i++){
  if(num[i]<0){ cout<<num[i]<<",";}
}
    return 0;
}