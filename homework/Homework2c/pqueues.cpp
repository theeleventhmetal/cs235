#include <iostream>
#include <string>
#include <queue>

using namespace std;


int main(int argc, char const* argv[]) {

    string u_input;
    string name;
    string priority;
    priority_queue<string> queue;

    while (true){

        cout << "What do you want to do? ";
        getline(cin, u_input);

        if (u_input == ""){ //exits on empty operation
            return 0;
        }
        else if (
            u_input != "add" &&
            u_input != "take"
        ){
            cout << u_input << " isn't a valid operation" << endl;
            continue;
        }

        if (u_input == "add"){

            cout << "Name: ";
            getline(cin, name);

            cout << "Priority: ";
            getline(cin, priority);


            if (priority.length() == 1) {
                priority = "0" + priority;
            }

            string entry = priority + " - " + name; //string concatenation
            queue.push(entry);    

        }
        else if (u_input == "take"){

            if (queue.empty()){ //checks if empty to avoid runtime error

                cout << "There are no more people in line" << endl;

            }
            else {
                
                string top = queue.top(); // return the highest priority entry

                cout << top << endl; //output to terminal

                queue.pop(); //remove top entry
            }
        }
    }

    return 0;

}


