#include <iostream>
using namespace std;
void ODDNUMBER(int l , int u){
  if (l==u || l>u || l+1==u){
    return;
  }
  if ((u-1)%2!=0){
    cout << u-1 << ",";
  }
  ODDNUMBER(l,u-1);
}

int main(){
  int a, b;
  cout << "enter lower bond:"<< "\n";
  cin >> a;
  cout << "enter upper bond:"<< "\n";
  cin >> b;
  cout << "number of odd numbers between upper and lower bound:"<< "\n";
  ODDNUMBER(a, b);
  return 0;
}
