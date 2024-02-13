#include<iostream>
#include<stack>

using namespace std;

int main() {
    int num;
    stack<int> coefficient;
    stack<int> Exponent;
    cout<<"Number of terms:";
    cin>> num;
    cout<<"Enter coefficient and exponent of the term->"<<endl;
    for(int i=1;i<=num;i++){
        int coeff,expo;
    cout<<"Term"<<i<<"  -  "<<"coefficient:";
    cin>> coeff;
    coefficient.push(coeff);
    cout<<"Term"<<i<<"  -  "<<"Exponent:";
    cin>> expo;
    Exponent.push(expo);
        }   
    cout<<"Coefficient"<<"  |  "<<"Exponent"<<endl;
    for(int i=1;i<=num;i++){
        cout<<"         "<< coefficient.top() <<"  |  "<<Exponent.top()<<endl;
        coefficient.pop();
        Exponent.pop();}



    return 0;

}
