#include <iostream>
#include <cstdlib>  // atof

using namespace std;
using std::abs;

const double EPSILON = 0.0001;

int main(int argc, char *argv[]){


    double val = stod(argv[1]);

    if (val>0){

        double upper = val;
        double lower = 0;
        double guess = val;


        while (guess*guess - val >= EPSILON || val - guess*guess >= EPSILON){
            guess = (upper + lower) / 2;
            cout << guess << " (" << guess*guess << ")" << endl;
            if (guess * guess > val) {
                upper = guess; 
            } else {
                lower = guess;
            }
        }
    }else {
        cout << "Input must be greater than 0" << endl;
        return 1; 
    }


    return 0;
}
