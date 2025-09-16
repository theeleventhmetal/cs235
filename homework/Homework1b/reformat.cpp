#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

string processLine(const string& line){
    string firstName, lastName;
    int points;
    double factor;

    istringstream ss(line);
    ss >> firstName >> lastName >> points >> factor;

    double sum = points * factor;

    return lastName + ", " + firstName + ": " + to_string(sum);

}

int main(int argc, char *argv[]){

    string input_file = argv[1];
    string output_file = argv[2];

    ifstream input(input_file);
    ofstream output(output_file);

    string line;
    while(getline(input,line)) {
        string formatted = processLine(line);
        output << formatted << endl;
    }

    input.close();
    output.close();

    return 0;
}