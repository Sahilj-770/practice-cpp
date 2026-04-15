//this program has an abstract base class which also contains a constructor.
#include <iostream>
using namespace std;

class base {
    public :
    base (){
        cout<<"base class constructor was called ";

    }

    virtual void show () = 0;
};

class derived : public base{
    void show () override{
        cout<<"it is overriden";
    }
};

int main (){
    derived obj;
    return 0;
}
