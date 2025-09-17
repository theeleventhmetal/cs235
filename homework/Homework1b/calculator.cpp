#include <iostream>

using namespace std;

int main(){

    string operation;
    string leftOperand;
    string rightOperand;
    int result;

    while (true){

        cout << "operation: ";
        getline(cin, operation);

        if (operation == ""){
            break;
        }
        else if (
            operation != "add" &&
            operation != "subtract" &&
            operation != "multiply" &&
            operation != "divide" &&
            operation != "mod"
        ){
            cout << operation << " isn't a valid operation" << endl;
            continue;
        }

        cout <<"left operand: ";
        getline(cin, leftOperand);

        cout << "right operand: ";
        getline(cin, rightOperand);

        if (operation == "add"){
            result = stod(leftOperand) + stod(rightOperand);
            cout << result << endl;
        }
        else if(operation == "subtract"){
            result = stod(leftOperand) - stod(rightOperand);
            cout << result << endl;
        }
        else if(operation == "multiply"){
            result = stod(leftOperand) * stod(rightOperand);
            cout << result << endl;
        }
        else if(operation == "divide"){
            result = stod(leftOperand) / stod(rightOperand);
            cout << result << endl;
        }
        else if(operation == "mod"){
            result = stoi(leftOperand) % stoi(rightOperand);
            cout << result << endl;
        }
        

    }

    return 0;
}