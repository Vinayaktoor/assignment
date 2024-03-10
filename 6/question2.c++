#include<iostream>
#include<string>
using namespace std;
void asc_sort(int arr[]){
    int size=10;
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<",";
    }
}

void des_sort(int arr[]){
    int size=10;
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]<arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<10;i++){
        cout<<arr[i]<<",";
    }
}
int main(){
    int numbers[10];
    cout<<"Enter 10 numbers: ";
    for(int i=0;i<10;i++)
    cin>>numbers[i];

    string str;

    cout<<"Enter order: ";
    cin>>str;
    if(str=="asc"){
          asc_sort(numbers);
    }
    else{
         des_sort(numbers);

    }
  return 0;
}