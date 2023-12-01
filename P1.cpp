//include headers and libraries
#include "Library.h"
#include <iostream>
#include <string.h>
using namespace std;

#include "Library.h"
#include <iostream>
#include <string>
using namespace std;
using namespace std;

int main(){
    Library library;
    string command;
    string bookName;
    bool tf;
    while(true){
        cout<<"Enter a command: ";
        cin>>command;
        cout<<command<<endl;
        if(command[0] == 'a'){
            cin>>bookName;
            tf = library.addBook(bookName);
            if(tf == true){
                cout<<"Book added"<<endl;
            }
            else{
                cout<<"Book not added"<<endl;
            }
        }
        else if(command[0] == 'r'){
            cin>>bookName;
            tf = library.removeBook(bookName);
            if(tf == true){
                cout<<"Book removed"<<endl;
            }
            else{
                cout<<"Book not removed"<<endl;
            }
        }
        else if(command[0] == 'p'){
            library.print();
        }
        else if(command[0] == 'q'){
            break;
        }
        else{
            cout<<"Invalid command"<<endl;
        }
    }
    return 0;
}
