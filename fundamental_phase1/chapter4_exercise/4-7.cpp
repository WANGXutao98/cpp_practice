#include <iostream>
#include<string>
using namespace std;

struct Pizza{
    string name;
    double diameter;
    int weight;

};

int main(){
    Pizza pizza;

    cout << "Enter the pizza company: ";
    getline(cin, pizza.name);
    cout << "Enter the pizza diameter: ";
    cin>>pizza.diameter;
    cout << "Enter the pizza weight: ";
    cin>>pizza.weight;

    cout << "\nHere is the pizza information: \n"
         << "Company: " << pizza.name << "\n"
         << "Diameter: " << pizza.diameter << "\n"
         << "Weight: " << pizza.weight << endl;



};