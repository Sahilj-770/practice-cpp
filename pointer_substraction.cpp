#include <iostream>
using namespace std;
int main() {
int arr[5] = {1, 2, 3, 4, 5};
int* ptr1 = &arr[2];
int* ptr2 = &arr[4];
cout << ptr2 - ptr1;
return 0;
}
