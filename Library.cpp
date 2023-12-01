
//include headers and libraries
#include "Library.h"
#include <iostream>
//implement class functions
Library::Library() {
    for (int i = 0; i < 10; i++) {
        if (books[i] == ""){ //if the book is empty
            books[i] = "";  //add the book
            break;
        }
    }
}

bool Library::addBook(string bookName) {
    for (int i = 0; i < 10; i++) {
        if (books[i] == ""){ //if the book is empty
            books[i] = bookName;  //add the book
            return true;
        }
    }
    return false;
}
bool Library::removeBook(string bookName) {
    for (int i = 0; i < 10; i++) {
        if (books[i] == bookName) { //if the book is in the library
            books[i] = "";  //remove the book
            return true;
        }
    }
    return false;
}


void Library::print() {
    cout << "Library contents:" << endl; //print "Library contents:"
    for (int i = 0; i < 10; i++) {
        cout << books[i] << endl; //print the books
    }
}


