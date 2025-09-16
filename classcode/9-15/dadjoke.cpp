#include <iostream>
#include <fstream>

using namespace std;

string getADadJoke(){
    //read in joke
    string dadJoke;
    cout << "Tell me a good dad joke:" << endl;
    getline(cin, dadJoke); // reads all characters until '\n'

    //print the joke out
    cout << endl;
    cout << "you said: " << dadJoke << endl;

    return dadJoke;
}

void saveDadJoke(string joke){
    //append the joke to a file
    ofstream output;
    output.open("JokeBase.txt", ios::app);

    output << joke << endl;

    output.close();
}


int main(int argc, char *argv[]){
    string dadJoke = getADadJoke();
    saveDadJoke(dadJoke);

    return 0;
}