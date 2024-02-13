#include<iostream>
using namespace std;
class stack{
int capacity;
int* arr;
int top;
int ele_no;
public:
stack(int c){
    this->capacity=c;
    arr = new int[c];
    this->top=-1;
    this->ele_no=1;
}
void push(int data){
    if(this->top==this->capacity-1){
        cout<<"overflow\n";
        this->ele_no++;
        return;
    }
  this->top++;
  this->arr[this->top]=data;

} 
void pop(){
    cout<< this->arr[this->top]<<endl;
     this->arr[this->top]=0;
     this->top--;
     }
bool isEmpty(){
    return this->top==-1;
}
bool isFull(){
    return this->top==this->capacity-1;
}
void stackele(){
     cout<<"stack element:";
    for(int i=0;i<=this->ele_no;i++){
      
        cout<<"   "<<arr[i]<<"   ";
    }
}
};
int main(){
   stack str(10);
   str.push(10);
   str.push(20);
   str.push(30);
   str.stackele();
   str.pop();
   str.stackele();
    return 0;
}