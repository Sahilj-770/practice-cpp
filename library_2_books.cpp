//this program has a library using class and for loop
#include <iostream>
using namespace std;

class base {
    public :
    int bookid;
    string title;
    void inp(){
        cout<<"enter the book id : ";
        cin>>bookid;
        cout<<"enter the book title : ";
        cin>>title;

    }

    void display(){
        cout<<"name : "<<title<<"  ID : "<<bookid<<endl;
    }
};

int main(){
    base b[2];
    for(int i = 0; i < 2; i++){
        b[i].inp();
    }
    for(int i = 0; i < 2; i++){
        b[i].display();
    }
    return 0;
}
