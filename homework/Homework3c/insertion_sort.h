#pragma once

#include <vector>
#include <algorithm>

using namespace std;

template <class T>
void sort(std::vector<T> &array)
{
    
for (int i = 1; i < array.size(); i++) {
    int j = i;
    while (j>0 && array[j]<array[j-1]) {
        swap(array[j], array[j-1]);
        j=j-1;
    }
        
}
    
}
