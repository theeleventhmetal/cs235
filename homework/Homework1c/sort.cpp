#include <iostream>
#include <string>
#include <sstream>

using namespace std;


void sort(std::string& a, std::string& b, std::string& c) {

    if (a > b) swap(a, b); // if a has a greater lexicographical value, it is swapped with b
    if (a > c) swap(a, c); // if a has a greater lexicographical value, it is swapped with c
    if (b > c) swap(b, c); // if b has a greater lexicographical value, it is swapped with c

    }


int main(int argc, char const* argv[]) {
    if (argc < 4) {
        std::cerr << "Usage: " << argv[0] << " a b c" << std::endl;
        return 1;
    }

    std::string a = argv[1];
    std::string b = argv[2];
    std::string c = argv[3];

    sort(a, b, c);

    std::cout << a << ' ' << b << ' ' << c << std::endl;

    return 0;
}
