#include<iostream>
using namespace std;

int main()
{
 int n;
 cin>>n;
 int count=0;
 while(n--){
int i,ith;
cin>>i>>ith;
if((ith-i)>5){
    count++;
}
 }
 cout<<count;
    return 0;
}