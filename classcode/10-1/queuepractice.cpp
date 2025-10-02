#include <iostream>
#include <stack>
#include <queue>

using namespace std;

bool isMatching(char opening, char closing) {

    switch (opening){
        case '(':
            if (closing == ')'){
                return true;
            }
            else {
                return false;
            }
        case '[':
            if (closing == ']'){
                return true;
            }
            else {
                return false;
            }
        case '{':
            if (closing == '}'){
                return true;
            }
            else {
                return false;
            }
            break;
        default: return false;
        
    }
}

bool isBalanced(string expression) {

    stack<char> stacko;

    for (int i = 0; i < expression.length(); i++){
        if ((expression[i] == '(') || (expression[i] == '[') || (expression[i] == '{')) {
            stacko.push(expression[i]);
        }
        else {
            if (stacko.empty()){
                return false;
            }
            else {
                char arriba = stacko.top();
                if (isMatching(arriba, expression[i])) {
                    stacko.pop();
                }
                else {
                    return false;
                }
            }
        }
    }

    return stacko.empty();
}

int main(int argc, char *argv[]){

    string expression = "{[()]}";

    if (isBalanced(expression)) {

        cout << expression << " is balanced" << endl;

    }
    else {
        cout << expression << " is NOT balanced";
    }

    return 0;
}

