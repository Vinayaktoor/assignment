#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(){
    stack<char>str;
    string acb;
    cout<<"enter string:";
    getline(cin,acb);
     if (acb[0] != 'c') {
        cout << "does not belong to grammer" << endl;
        return 0;
    }
    int top=0,i=0;
    while(acb[i]!='\0' ){
        if(acb[i]==' ') {cout<<"does not belong to grammer";return 0;}
        if(acb[i]=='c'){break;}
        str.push(acb[i]);
        top++;
        i++;
    }
    i++;
    while(acb[i]!='\0'){
        if(acb[i]==' ') {cout<<"does not belong to grammer";return 0;}
        if( !str.empty() && acb[i]==str.top()){
            str.pop();
            top--;
            i++;}
            
    }
    if(top==0 && str.empty()==true){
        cout<<"this belong to the gramer";}    
    else
    {cout<<"does not belong to grammer";}    
    
    return 0;}