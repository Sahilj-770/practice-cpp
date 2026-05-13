#include <iostream>
using namespace std;
int main() {
int arr[] = {10, 20, 30, 40};
int *ptr = &arr[3]; 
cout << "Initial value: " << *ptr << endl; 
ptr--; 
cout << "After 1st decrement: " << *ptr << endl; 
ptr--; 
cout << "After 2nd decrement: " << *ptr << endl; 
return 0;
}
