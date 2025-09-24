#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>

using namespace std;

void addUnique(istream& in, vector<string>& unique){ 
    string line;
    while (getline(in, line)) {
            bool in_list = false;
            for (int i = 0; i < unique.size(); i++) {
                if (unique[i] == line) {
                    in_list = true;
                    break;
                }
            }
            if (!in_list) {
                unique.push_back(line);
            }
    }
}


int main(int argc, char const* argv[]) {

    vector<string> unique;
    string line;

    if (argc >= 2){

        string input_file = argv[1];
        ifstream input(input_file);
        addUnique(input, unique);

    } else {

        addUnique(cin,unique);

    }
    
    for (int i = 0; i < unique.size(); i ++){
        cout << unique[i] << endl;
    }
    
    return 0;
}
