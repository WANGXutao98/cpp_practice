#include <iostream>
using namespace std;

class Person{

    public:

    Person(){
        cout<<"constructor"<<endl;
    };

    ~Person(){
        cout<<"destructor"<<endl;
    }

    string name;
    int age;

    void showDetail(){

    };


};

void test01(){
    Person p;
}

int main(){
    test01();
}