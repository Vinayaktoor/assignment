#include<iostream>
using namespace std;
int main(){
  float mks[8];
  cout<<"Enter the marks:";
  float total=0;
  for(int i=0;i<8;i++){
   cin>> mks[i];
   total+=mks[i];
  }  
  int count=0;
  for(int i=0;i<8;i++){
    if(mks[i]>total/8){
      count++;
    }

  }
   cout<<"output:"<<count;
    return 0;
}