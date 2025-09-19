#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(int argc, char const* argv[]) {
    
    string line;
    
    int num_lines = 10;
    int count = 0;

    if(argc == 1){ // no arguments given, output 10 lines from standard input
        while (count < num_lines && getline(cin,line)){
            cout << line << endl;
            count ++;
        }
    }

    if (argc >= 2){

        string arg = argv[1];

        if (argc == 2 && arg[0] == '-') { // one argument given prefixed with '-',  output n lines from standard input
            num_lines = stoi(arg.substr(1));
            while (count < num_lines && getline(cin,line)){
                cout << line << endl;
                count ++;
            }
        }

        else if (argc == 2 && arg[0] != '-'){ // one argument given as a filename, output <10 lines from file
            string input_file = arg;
            

            ifstream input(input_file);
            if (!input.is_open()){ // output error message if file does not exist
                cout << "ERROR: can't open file" << endl;
                return -1;
            }
            while (count < num_lines && getline(input,line)){
                cout << line << endl;
                count ++;
            }
        }

        else if (argc == 3){ // two arguments given, output n lines from file 
            num_lines = stoi(arg.substr(1));
            string input_file = argv[2];

            ifstream input(input_file);
            if (!input.is_open()){
                cout << "ERROR: can't open file" << endl;
                return -1;
            }
            while (count < num_lines && getline(input,line)){
                cout << line << endl;
                count ++;

            }
        }

        }

    return 0;
}