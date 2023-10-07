#include <iostream>
#include<string>
using namespace std;

int main(){
    string first_name;
    string last_name;

    char grade;
    int age;

    cout << "What is your first name: \n";
    getline(cin,first_name);

    cout << "What is your last name: \n";
    getline(cin,last_name);
    


    cout << "Name: " << last_name << ", " << first_name << endl;

}