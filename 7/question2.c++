#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
   while(n--){
    bool ans=false;
        int ball[3];
        for(int i=0;i<3;i++){
            cin>>ball[i];
        }
         for(int i=0;i<3;i++){
            int sum=0;
            for(int j=0;j<3;j++){
                if(j==i) continue;
                else{
                    sum+=ball[j];
                }
            }
            if (sum==ball[i]){
                ans = true;
            }
          
        }
        if(ans==true){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }

    }
    return 0;
}