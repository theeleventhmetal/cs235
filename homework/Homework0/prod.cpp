#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

    double num1 = stod(argv[1]);
    double num2 = stod(argv[2]);
    double product = num1 * num2;
    

    if (argc > 1) {
        cout << argv[1] << " * " << argv[2] << " = " << product << endl;
    }
    else cout << "segementation fault";


    return 0;
}