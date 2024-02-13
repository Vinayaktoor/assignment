#include<iostream>
using namespace std;
int main(){
    int ele;
    cout<<"number of non zero element:";
    cin>>ele;
    int r,c;
    cout<<"enter dimentions of the matrix:";
    cin>>r>>c;
    int matrix[r][c];
    for (int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            matrix[i][j]=0;
        }
    }
    for(int i=1;i<=ele;i++){
        int x,y,num;
        cout<<"enter the cordinate :";
        cin>>x>>y;
        cout<<"enter number at this place:";
        cin>>num;
        cout<<endl;
        matrix[x][y]=num;
    }
    for (int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<"   "<<matrix[i][j];
        }
        cout<<endl;
    }
   
    

    return 0;
}