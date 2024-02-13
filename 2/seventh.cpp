#include<cmath>
#include<iostream>
using namespace std;
int main(){
int esd,n;
cout<<"enter a positive number of three digit :"<<endl;
cin>>esd;
cout<<"enter position of number:";
cin>>n;
int size=0;
int temp=esd;
while(temp>0){
size++;
temp=temp/10;
}
if(size==n){
    cout<<"(n+1)th term do not exist";
    return 0;
}
int result,nth,n2;

for(int i=1;i<=size;i++){
if(i==n){
    nth=esd%10;
}
if(i==n+1){
 n2=esd%10;
}
esd=esd/10;
}
result=n2*pow(10,n)-nth*pow(10,n-1);
cout<<result;
    return 0;
}