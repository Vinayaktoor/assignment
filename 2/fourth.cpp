#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"enter first  no.:";
    cin>> x;
    cout<<endl;
    cout<<"enter second no.:";
    cin>>y;
    cout<<endl;
    cout<<"enter third no.:";
    cin>>z;
    cout<<endl;
 
(x<y)?((x<z)?cout<<x <<" is smaller":cout<<z <<" is smaller"):((y<z)?cout<<y <<" is smaller":cout<<z <<"is the smaller");

    
    return 0;
}