
#include <iostream>
#include <iomanip>
using namespace std;

void modify(int x, int y, int z){
cout << setfill('$');
cout << setw(sizeof(int)) << x;

cout << setfill('#');
cout << left << setw(sizeof(char)) << y ;

cout << setfill('@');
cout << right << setw(sizeof(double)) << z << endl;
}
int main(){

modify(9, 4, 18);
return 0;

}
