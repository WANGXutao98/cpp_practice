#include <iostream>
using namespace std;

int main(){
    char first_name[30];
    char last_name[30];

    char grade;
    int age;

    cout << "What is your first name: ";
    cin.getline(first_name,40);

    cout << "What is your last name: ";
    cin.getline(last_name,40);
    
    cout << "What is your grade: ";
    cin>>grade;
    
    cout << "What is your age: ";
    cin>>age;


    cout << "Name: " << last_name << ", " << first_name << endl;
    cout << "Grade: " << char(grade+1) << "\n";
    cout << "Age: " << age << endl;

}