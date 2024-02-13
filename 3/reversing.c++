  #include<iostream>
  using namespace std;
    void reverse(int x,long &answer) {
      if(x<=0) return;
      else{
      int digit = x%10;
      answer= answer*10+digit;

      reverse(x/10,answer);
      return ;
       }
    }
int main(){
    cout<<"Enter number:";
    int num;
    cin>> num;
    long answer=0;
    reverse(abs(num),answer);
    if(num<0){cout<<"Reversed number:" <<-1*answer;}
   else{ cout<<"Reversed number:" <<answer;}
    return 0;
}
