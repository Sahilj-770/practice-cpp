#include <iostream>
using namespace std;
int main() {
int a = 10, b = 30;
int *p;
p = &a;
cout << "p points to a: " << *p << endl;
p = &b; 
cout << "p now points to b: " << *p << endl;
return 0;
}
