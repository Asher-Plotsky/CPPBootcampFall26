// TASK 03 -- The Stack ADT's implementation
//
// This is where "how" lives. We chose std::vector as the backing
// storage: push_back is our push, back() is our top, pop_back() is our
// pop. A student could rewrite this whole file to use a raw fixed-size
// array instead, and as long as push/pop/top/isEmpty/size still behave
// the same way, nothing calling this class would ever notice.

#include "Stack.h"

void Stack::push(int value) {
    // TODO: add value to the top of data_ (vector has a method for this)
    data_.push_back(value);
}

void Stack::pop() {
    // TODO: if data_ isn't empty, remove the top element
    if (!data_.empty())
    {
        data_.pop_back();
    }
}

int Stack::top() const {
    // TODO: return the top element of data_
    // undefined if empty -- callers should check isEmpty() first. We'll
    // harden this kind of thing later in the course.
    return data_.back();
}

bool Stack::isEmpty() const {
    // TODO: return whether data_ has zero elements
    return data_.empty();
}

int Stack::size() const {
    // TODO: return how many elements are in data_ (cast to int)
    return int(data_.size());
}
