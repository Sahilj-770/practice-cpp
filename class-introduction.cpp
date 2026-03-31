#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class student{
    private:
        int standard, age;
        string first_name, last_name;
        
    public:
    void set_age(int s){
        age=s;
    }
    int get_age(){
        return age;
    }
    
    void set_standard(int st){
        standard=st;
    }
    int get_standard(){
        return standard;
    }
    
    void set_first_name(string fn){
        first_name=fn;
    }
    string get_first_name(){
        return first_name;
    }
    
    void set_last_name(string ln){
        last_name=ln;
    }
    string get_last_name(){
        return last_name;
    }
    void to_string(){
        cout<<age<<","<<first_name<<","<<last_name<<","<<standard;
    }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    st.to_string();
    
    return 0;
}
