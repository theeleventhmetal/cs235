#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main(int argc, char *argv[]){

    string input_file = argv[1];
    string state = argv[2];
    string year = argv[3];

    double total_ur = 0;
    int months = 0;


    ifstream input(input_file);

    if (input.is_open()){

        string line;
        while (getline(input,line)){
            stringstream ss(line);
            string line_state, line_year, line_month, line_ur;
            ss >> line_state >> line_year >> line_month >> line_ur;
            if (state == line_state && year == line_year){
                total_ur += stof(line_ur);
                months ++;

            }
        }

    double result = total_ur/months;

    cout << result << endl;

        
    } else cout << "ERROR: could not open file" << endl;

    

    return 0;
}