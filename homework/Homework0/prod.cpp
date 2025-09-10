#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {


    if (argc != 3) {
        cout << "prod requires 2 arguments" << endl;
        return 1;
    }
    else {
        double num1 = stod(argv[1]);
        double num2 = stod(argv[2]);
        double product = num1 * num2;

        cout << argv[1] << " * " << argv[2] << " = " << product << endl;
        return 0;
    }
        
}