#include "Catalog.h"
#include <iostream>

namespace cs210::library {

    void Catalog::addBook(const Book& book) {
        // TODO: add book to the end of books_
        books_.push_back(book);
    }

    void Catalog::printAll() const {
        // TODO: loop over books_ and print each one's title and author
        // (see main.cpp's output for the exact format we want)
        for (int i = 0; i < books_.size(); ++i)
        {
            std::cout << books_[i].title() << ", " << books_[i].author() << std::endl;
        }
    }

    int Catalog::count() const {
        // TODO: return how many books are in books_ (cast to int)
        return int(books_.size());
    }

}
