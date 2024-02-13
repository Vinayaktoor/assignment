#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter the sentence:" <<endl;
    getline(cin,str);
   int i=0;
 while(str[i]!='\0'){
    if(str[i]==' '){
        cout<<endl;
    }
    else{
  cout<<str[i];
    }
    i++;
 }
    return 0;
}