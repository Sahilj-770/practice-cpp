//binary operator is overloaded using friend function
#include <iostream>
using namespace std;

class base{
    public:
    int a;
    base(int x){
        a=x;
    }
    
    friend void operator+(base &obj1, base &obj2);
       
       
    
};

void operator+(base &obj1, base &obj2){
        int sum = obj1.a + obj2.a;
        cout<<"The sum is: "<<sum<<endl;
    }



int main(){
    base obj1(5);
    base obj2(10);
    
    obj1 + obj2; 
    
    return 0;
}

