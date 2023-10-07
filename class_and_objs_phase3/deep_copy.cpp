#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

//如果不利用深拷贝在堆区创建新内存，会导致浅拷贝带来的重复释放堆区问题
class Person{

    public:

    Person(){
        cout<<"constructor"<<endl;
    };

    Person(int a, int height){
        age = a;
        m_height = new int(height);
        cout<<"constructor with variable: "<<age<<endl;
    }

    //拷贝构造函数
    Person(const Person &p){
        age = p.age;
         m_height = new int(*p.m_height);
    }
 
    ~Person(){
        if (m_height!=NULL){
            delete m_height;
            m_height = NULL;
        }
        cout<<"destructor"<<endl;
    }

    string name;
    int age;
    int* m_height;

};

void test01(){
    Person p(10,160);

    Person p2(p);
};

void test02(){
    // Person p1(10);
    // Person p2 = Person(10);
    // Person p3 = Person(p2);
};


int main(){
    test01();
}