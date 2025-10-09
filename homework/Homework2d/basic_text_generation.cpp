#include <iostream>
#include <map>
#include <unordered_map>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

int main(){

    unordered_map<string, vector<string>> map;

    ifstream input("1Nephi.txt");

    string prev = "";
    string curr;

    while (input >> curr)
        map[prev].push_back(curr);
        prev = curr;

};
