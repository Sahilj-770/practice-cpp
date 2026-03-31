#include <iostream>
using namespace std;

class prog{
    public:
        int n;
        void input(){
            
            cin>>n;
        }
        
        void display(){
             string ones[] = {"zero", "one", "two", "three", "four",
                     "five", "six", "seven", "eight", "nine"};

 

            if (1<=n && n<=9){
                        cout << ones[n];

            }
            else if (n>9){
                cout<<"Greater than 9";
            }
            

        }
};

int main(){
    
    prog obj;
    obj.input();
    obj.display();
    return 0;
    
}
