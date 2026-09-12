// TASK 03 -- The Stack ADT's implementation
//
// This is where "how" lives. We chose std::vector as the backing
// storage: push_back is our push, back() is our top, pop_back() is our
// pop. A student could rewrite this whole file to use a raw fixed-size
// array instead, and as long as push/pop/top/isEmpty/size still behave
// the same way, nothing calling this class would ever notice.

#include "Stack.h"

Stack::Stack()
{
    topIndex = 0;
}

void Stack::push(int value) {
    // TODO: add value to the top of data_ (vector has a method for this)
    data[topIndex] = value;
    topIndex++;
}

int Stack::pop() {
    // TODO: if data_ isn't empty, remove the top element
    if (topIndex != 0){
        int currval = data[topIndex - 1];
        topIndex--;
        data[topIndex] = 0;
        return currval;
    }
}

int Stack::peek() const {
    // TODO: return the top element of data_
    // undefined if empty -- callers should check isEmpty() first. We'll
    // harden this kind of thing later in the course.
    return data[topIndex - 1];
}

bool Stack::isEmpty() const {
    // TODO: return whether data_ has zero elements
    if (topIndex == 0)
    {
        return true;
    }
    return false;
}

bool Stack::isFull() const{
    // TODO: return whether data_ has maximum elements
    if (topIndex == this->size())
    {
        return true;
    }
    return false;
}

int Stack::size() const {
    // TODO: return how many elements are in data_ (cast to int)
    return int(double(sizeof(data))/sizeof(data[0]));
}
