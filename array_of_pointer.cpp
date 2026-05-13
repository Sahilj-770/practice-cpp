#include <iostream>
using namespace std;
int main()
{
int var1 = 10;
int var2 = 20;
int var3 = 30;
int* ptr_arr[3] = { &var1, &var2, &var3 };
for (int i = 0; i < 3; i++) {
cout << "Value of var" << i + 1 << ": " << *ptr_arr[i]
<< "\t Address: " << ptr_arr[i] << endl;
}
return 0;
}
