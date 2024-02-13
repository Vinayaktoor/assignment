#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(){
    stack<char>str;
    string ab;
    cout<<"enter string:";
    getline(cin,ab);
    int top=0, i=0;
    while(ab[i]!='b'){
        if(ab[i]==' '||ab[i]!='a') {cout<<"invalid string";return 0;}
        if(ab[i]=='a'){
            str.push('a');
            top++;
        }
        i++;
    }
    i=0;
    while( i < ab.length()){
         if(ab[i]!=('a'||'b') ){ cout<<"invalid string";return 0;}
        if(ab[i]=='b'){
            str.pop();
            top--;
        }
        i++;
    }
    if(top==0&&str.empty()==true){
        cout<<"valid string";
    }
    else{
        cout<<"invalid string";
    }
    return 0;
}