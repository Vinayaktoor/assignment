#include<iostream>
using namespace std;
int main(){
    int X,Y;
    
    int x,y;
    int count,test;
    cout<<"enter no. of test cases:";
    cin>>test;

   while(test--){ 
    count=0;
    cout<<"Enter X , Y:";
     cin>>X>>Y;
    for(x=1;x<X;x++){
        for(y=x+1;y<=X;y++){
            
        if((Y%x)%y==(Y%y)%x)
           { cout<<"Ordered pair:"<<"("<<x<<","<<y<<")"<<endl;    
                count++;}
            
        }
    }}
    cout<<count;

    return 0;
}