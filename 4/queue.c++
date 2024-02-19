#include<iostream>
using namespace std;
class queue{
int *arr;
int first;
int last;
int capasity;

public:
   queue(int size){
    arr = new int[size];
    this->first=0;
    this->last=-1;
    this->capasity=size;
   }
   void enqueue(int n){
    if(this->last==this->capasity-1){cout<<"overflow";return;}
   this->last++;
    arr[this->last]=n;
   }
   void dqueue(){
     if(this->first==this->last){cout<<"queue is empty";return;}
    arr[this->first]=0;
    this-> first++;
   }
   void print(){
    int i =this->first;
    int n=this->last;
    for(i;i<=n;i++){
        cout<<arr[i]<<"  ";
    }
    
   }
   bool isempty(){
    if(this->last==-1 &&this->first==0 ||this->first==this->last){
        return true;
    }
    else{return false;}
   }
   bool isfull(){
    if(this->first==0 && this->last==this->capasity-1){
        return true; }
        else{return false;}
   }
};
int main(){
  queue q(4);
  q.enqueue(4);
  q.enqueue(3);
  q.enqueue(2);
  q.dqueue();
  q.print();

    return 0;
}