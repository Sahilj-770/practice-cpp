#include <iostream>
using namespace std;
int main() {
    int n; 
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    int* ptr = arr;
    
    for ( int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >>*ptr;
         ptr++;
    }
    ptr = arr; 
    for ( int i = 0; i < n; i++) {
        cout << "the number " << i + 1 <<" is " <<*(ptr + i) << endl;
    }
    return 0;
}
