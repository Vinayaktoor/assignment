#include<iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string>first(4);
    vector<string>second(4);
    for (int i = 0; i < 4; i++)
    {
       cin>>first[i];
    }
    for (int i = 0; i < 4; i++)
    {
       cin>>second[i];
    }
    int count=0;
    for(int i=0;i<4;i++){
        for (int j = 0; j < 4; j++)
        {
          if(first[i]==second[j]){
            count++;
            break;}
        }        
    }
    if (count<=4&&count>=2){
        cout<<"similar";
    }
    else{
        cout<<"dissimilar";
    }

    return 0;
}