#include <iostream>
#include <stack>
#include <string>
#include <cmath> 
using namespace std;

int evaluatePostfix(string postfix) {
    stack<int> operands;
    
    for (char& c : postfix) {
        if (isdigit(c)==true) {
            operands.push(c - '0'); 
        } else {
            int operand2 = operands.top();
            operands.pop();
            int operand1 = operands.top();
            operands.pop();
            
            switch (c) {
                case '+':
                    operands.push(operand1 + operand2);
                    break;
                case '-':
                    operands.push(operand1 - operand2);
                    break;
                case '*':
                    operands.push(operand1 * operand2);
                    break;
                case '/':
                    operands.push(operand1 / operand2);
                    break;
                case '^':
                    operands.push(pow(operand1, operand2));
                    break;
                default:
                    cout << "Invalid operator";
                    return -1; 
            }
        }
    }
    
    return operands.top();
}

int main() {
    string postfix;
    cout << "Enter postfix expression: ";
    getline(cin, postfix);
    
    int result = evaluatePostfix(postfix);
    
    cout << "Result: " << result << endl;
    
    return 0;
}
