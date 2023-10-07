#include <iostream>
using namespace std;
#include<string>


struct Pizza{
    string name;
    double diameter;
    int weight;

};
int main(){
    Pizza* pizza = new Pizza;

    cout << "Enter the diameter of pizza: ";
    cin >> pizza->diameter;

    cout << "Enter the weight of pizza: ";
    cin >> pizza->weight;

    // 注意上语句输入完 weight 后，回车键留在输入流中，以下的 getline 
    // 碰到输入流中的回车就以为结束了，所以如果没有这个 cin.get() 先读
    // 取回车，那么用户永远获得 company 的值。
    cin.get(); 

    cout << "Enter the pizza company: ";
    getline(cin, pizza->name);

    cout << "\nHere is the pizza information: \n"
         << "Company: " << pizza->name << "\n"
         << "Diameter: " << pizza->diameter << "\n"
         << "Weight: " << pizza->weight << endl;

    delete pizza;


}