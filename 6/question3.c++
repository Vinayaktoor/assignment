#include<iostream>
#include<string>
using namespace std;
int main(){
    cout<<"List of student from batch 1:";
    string batch1[5];
    string batch2[5];
    for(int i=0;i<5;i++){
        getline(cin,batch1[i]);

    }
    cout<<"List of student from batch 2:";
    for(int i=0;i<4;i++){
        getline(cin,batch2[i]);
        
    }
    string imposter;
    cout<<"Enter student to be shifted:";
    cin>> imposter;
    for(int i=0;i<5;i++){
        if(batch1[i]==imposter){
            batch1[i]=' ';
            batch2[4]=imposter;
            break;
        }
    }
     cout<<"batch 1:"<<endl;
     for(int i=0;i<5;i++){
        cout<<batch1[i]<<",";
     }
     cout<<endl;
     cout<<"batch 2:"<<endl;
      for(int i=0;i<5;i++){
        cout<<batch2[i]<<",";
     }

    return 0;
}