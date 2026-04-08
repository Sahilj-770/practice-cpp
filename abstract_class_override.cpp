#include <iostream>
using namespace std;

class shape {
    public:
    virtual int area (int a) = 0;
};

class rectangle:public shape{
    public:
    int area (int a) override{
        return a*a;
    }
};

class circle:public shape{
    public:
    int area (int a) override{
        return 3.14*a*a;
    }
};

int main (){
    int r;
    cout<<"enter the area you need ";
    cin>>r;
    rectangle obj;
    circle obj1;
    cout<<"area if given value is radius of cricle is "<<obj1.area(r)<<endl;
    cout<<"area of the given value is side of square is "<<obj.area(r)<<endl;
    return 0;

}
