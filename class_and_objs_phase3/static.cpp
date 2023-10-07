#include <iostream>
using namespace std;

class Person{
    public:
    static string m_Name;

	private:
	static int m_age;

// 	Person(string name, string pName) :m_Name(name)
// 	{
// 		cout << "Person构造" << endl;
// 	}
//     	~Person()
// 	{
// 		cout << "Person析构" << endl;
// 	}

};

string Person::m_Name = "name";

void test01()
	{
        Person p;
		cout << p.m_Name << endl;

		Person p1;
		p1.m_Name = "name2";
		cout << p1.m_Name << endl;

		cout<<Person::m_Name<<endl;
	}

int main(){
	test01();

};