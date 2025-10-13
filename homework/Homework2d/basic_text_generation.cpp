#include <iostream>
#include <map>
#include <unordered_map>
#include <string>
#include <fstream>
#include <vector>
#include <random>

using namespace std;

void text_gen(unordered_map<string, vector<string>> map, string prev, int limit){

    int count = 0;
    string curr;
    cout << prev << " ";
    

    while (count<limit){
        vector<string> value = map[prev];
        int randomNum = rand() % value.size();

        curr = value[randomNum];
        cout << curr << " ";
        prev = curr;
        count++;

    }

}

int main(int argc, char const* argv[]){

    srand(time(0));

    string input_file = argv[1];
    int limit = stoi(argv[2]);

    unordered_map<string, vector<string>> map;

    ifstream input(input_file);

    string prev = "";
    string curr;

    while (input >> curr){

        map[prev].push_back(curr);
        prev = curr;

    }

    text_gen(map, "", limit);

};
