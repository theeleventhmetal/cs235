#include <cstddef>
#include <queue>

using namespace std;

template <class T>
class PQ {

    public:

    priority_queue<T> queue;

    void push(T const& item) {

        queue.push(item);
    }

    void pop() {

        queue.pop();
    }

    size_t size() const {

        return queue.size();
    }

    T top() const {

        return queue.top();
    }

    bool empty() const {

        return queue.empty();
    }

};
