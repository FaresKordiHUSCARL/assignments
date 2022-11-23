#include <iostream>
#include <sstream>
#include <string>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student{
    private:
    int age, standard;
    string first_name, last_name;
    
    public:
    int get_age(){
        return age;
    }
    void set_age(int x){
        age = x;
    }
    string get_first_name(){
        return first_name;
    }
    void set_first_name(string x){
        first_name = x;
    }
    string get_last_name(){
        return last_name;
    }
    void set_last_name(string x){
        last_name = x;
    }
    int get_standard(){
        return standard;
    }
    void set_standard(int x){
        standard = x;
    }
    string to_string(){
        stringstream n;
        n<<age<<","<<first_name<<","<<last_name<<","<<standard<<endl;
        return n.str();
    }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
