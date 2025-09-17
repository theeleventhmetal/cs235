#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main(int argc, char *argv[]) {
    string input_file = argv[1];
    ifstream input(input_file);

    string line;
    string longest_line;
    string word;
    int longestCount = 0;

    while (getline(input, line)) {
        stringstream ss(line);
        int wordCount = 0;
        while (ss >> word) {
            wordCount++;
        }
        if (wordCount > longestCount) {
            longestCount = wordCount;
            longest_line = line;
        }
    }

    input.close();

    cout << longest_line << endl;

    return 0;
}


