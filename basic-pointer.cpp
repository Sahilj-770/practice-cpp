#include <iostream>
using namespace std;

int update(int *a,int *b) {
    int p, q;
    p= *a + *b;
    q = abs(*a - *b );
    cout<<p<<endl;
    cout<<q;
    return 0;

    
    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    cin>>*pa;
    cin>>*pb;
    
    update(pa, pb);
    return 0;
}
