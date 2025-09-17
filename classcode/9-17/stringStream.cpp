#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string myString = "This is a test string";

    stringstream ss(myString); //instantiate a string stream object and call its contents

    //go through the whole string word by word
    string palabra;
    int count = 0;
    while (ss >> palabra) {
        cout << palabra << endl;
        count++;
    }

    cout << "the string had " << count << " words in it" << endl;

    return 0;

}

// palabra is a placeholder string that is used to store each word of myString so it can be printed 
// the while loop runs until there are no more words to extract from myString
// ss is just convention, it is just a variable name for the stringstream object
//could also be: 
// stringstream words(myString);
// while (words >> palabra) {
//     cout << palabra << endl;
//     count++;
// }
