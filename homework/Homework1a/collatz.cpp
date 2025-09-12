#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
    int arg = stod(argv[1]);
    cout << arg << endl;

    while (arg > 1){
        if (arg%2 == 0){
            arg = arg /2;
            cout << arg << endl;
        }
        else {
            arg = arg * 3 + 1;
            cout << arg << endl;
        }
    }

    return 0;
}
