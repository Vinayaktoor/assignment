#include<iostream>
#include<stack>
using namespace std;
void filingstack (int n,stack<int>&num){
    if (n<=0){return;}
    else{
    num.push(n);
    filingstack(n-1,num);}
    return;
}
int factorial(int n,stack<int>&num){
   long ans=1;
   if(n<=0){return 1;}
   else{
   ans=num.top();
   num.pop();
   return ans*factorial(n-1,num);


   }
   
}
int main(){
    stack<int> num;
    int fact;
 cout<<"Enter no.:";
 cin>> fact;
 filingstack(fact,num);
 cout<< factorial(fact,num);
    return 0;
}