#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

#include "Grid.h"

bool solveMazeRec(Grid& maze, int r, int c, int j, vector<vector<int>>& solution) {
    
    if ((r < 0) || (r >= maze.height()) || 
        (c < 0) || (c >= maze.width()) || 
        (j < 0) || (j >= maze.depth())) {
        return false;
    }

    if (maze.at(r, c, j) == 0 || maze.at(r, c, j) == 2) {
        return false;
    }

    solution.push_back({r, c, j});

    
    if ((r == maze.height() - 1) && (c == maze.width() - 1) && (j == maze.depth() - 1)) {
        return true;
    }

    maze.at(r, c, j) = 2;

    if (solveMazeRec(maze, r, c+1, j, solution) ||     // right
        solveMazeRec(maze, r-1, c, j, solution) ||     // up
        solveMazeRec(maze, r+1, c, j, solution) ||     // down
        solveMazeRec(maze, r, c-1, j, solution) ||     // left
        solveMazeRec(maze, r, c, j+1, solution) ||     // forward
        solveMazeRec(maze, r, c, j-1, solution)) {     // backward
        return true;
    }

    
    solution.pop_back();
    maze.at(r, c, j) = 1;
    return false;
}

int main(int argc, char const* argv[]) {
    if (argc < 3) {
        cout << "Usage: " << argv[0] << " <input_file> <output_file>" << endl;
        return 1;
    }

    string input = argv[1]; 
    string output = argv[2]; 
    ifstream inputFile(input);
    ofstream outputFile(output);
    
    if (!inputFile.is_open()) {
        cout << "Error: Could not open input file " << input << endl;
        return 1;
    }

    Grid maze;
    inputFile >> maze;  
    inputFile.close();
    
    vector<vector<int>> solution;

    if (solveMazeRec(maze, 0, 0, 0, solution)) {
        outputFile << "SOLUTION" << endl;
        
        for (int i = 0; i < solution.size(); i++) {
            for (int j = 0; j < solution[i].size(); j++) {
                outputFile << solution[i][j];
                if (j < solution[i].size() - 1) {
                    outputFile << " "; 
                }
            }
            outputFile << endl;
        }
    }
    else {
        outputFile << "NO SOLUTION" << endl;
    }
    
    outputFile.close();
    return 0;
}

