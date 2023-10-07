#include <iostream>
#include <vector>
using namespace std;

struct student
{
    string name;
    int age;
    string address;
};
int main()
{
    // 结构体与指针
    student s = {"wang", 23, "shenzhen"};
    student *p1 = &s;

    cout << "name is " << p1->name << endl;
}