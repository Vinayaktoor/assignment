#include <iostream>
#include <stack>
#include <string>
using namespace std;

int power(char a) {
    switch (a) {
        case '+':
        case '-':
            return 1;
        case '/':
        case '*':
            return 2;
        case '^':
            return 3;
        default:
            return 0;
    }
}

int main() {
    stack<char> postfix;
    string input;
    cout << "enter infix: ";
    getline(cin, input);
    string answer;
    for (int i = 0; i < input.length(); i++) {
        char temp = input[i];
        if (temp != '+' && temp != '-' && temp != '*' && temp != '/' && temp != '^') {
            answer += temp;
        } else {
            if (postfix.empty()==true) {
                postfix.push(temp);
            }
         else {
                if (power(temp) > power(postfix.top())) {
                    postfix.push(temp);
                } else {
                    while (!postfix.empty() && power(temp) <= power(postfix.top())) {
                        answer += postfix.top();
                        postfix.pop();
                    }
                    postfix.push(temp);
                }
            }
        }
    }
    while (!postfix.empty()) {
        answer += postfix.top();
        postfix.pop();
    }
    cout << answer;
    return 0;
}
