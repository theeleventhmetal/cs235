#pragma once
#include <cstdlib>
#include <vector>

using namespace std;

template<class T>
class VectorSet {
public:


    //constructor
    //deconstructor


    bool contains(T item) const {
        // implement contains here

        for (int i = 0; i < v.size(); i++){
            if (v[i] == item) {
                return true;
            }
        }

        return false;

        
        // return true if item is in the set and false if not
    }

    bool insert(T item) {
        // implement insert here
        if (!contains(item)){
            v.push_back(item);
            return true;
        }

        return false;
        
        // return true if item is inserted and false if item is already in the
        // set
    }

    bool remove(T item) {
        // implement remove here
        if (contains(item)){
            for (int i = 0; i < v.size(); i++){
                if (v[i] == item) {
                    v.erase(v.begin()+i);
                    return true;
                }
            }
        }

        return false;

        // return true if item is removed and false if item wasn't in the set
    }

    size_t size() const {
        // implement size here

        return v.size();

        // return the number of items in the set
    }

    bool empty() const {
        // implement empty here
        if (v.size() == 0){
            return true;
        }

        return false;

        // return true if the set is empty and return false otherwise
    }

    void clear() {
        // implement clear here

        return v.clear();
        
        // remove all items from the set
    }

private:
    vector<T> v;

};
