#include<iostream>
using namespace std;
int main(){
    int X,Y;
    cin>>X>>Y;
    int x,y;
    int count=0;
    for(x=1;x<X;x++){
        for(y=x+1;y<X;y++){
            // if((Y%x)%y==(Y%y)%x){
                
                count++;
            
        }
    }
    cout<<count;

    return 0;
}