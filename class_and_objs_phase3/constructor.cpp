#include <iostream>
using namespace std;

class Person{

    public:

    Person(){
        cout<<"constructor"<<endl;
    };

    Person(int a){
        age = a;
        cout<<"constructor with variable"<<endl;
    }

    //拷贝构造函数
    Person(const Person &p){
        age = p.age;
    }

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

void test02(){
    Person p1(10);
    Person p2 = Person(10);
    Person p3 = Person(p2);
};


int main(){
    test02();
}