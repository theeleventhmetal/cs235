#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;

void printMap(map<string, string> m) {
    cout << endl << "The map is:" << endl;
    for (map<string,string>::iterator iterador = m.begin(); iterador != m.end(); iterador++){
        //cout << *iterador << endl;  //syntax for printing out a set as opposed to a map
        cout << (*iterador).first << endl;
    }
}

int main(){

    map<string,string> conference;

    //insert
    conference["Elder Holland"] = "spit and clay";
    conference["Elder Brown"] = "patotoo na 'di namamatay";
    conference["Elder Amos"] = "idagdag natin ng mas maraming jesus sa ating buhay";
    conference["Sister Dennis"] = "Huwag tayo maghukom";

    printMap(conference);

    return 0;

};