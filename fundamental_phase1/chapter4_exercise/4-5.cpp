#include <iostream>
#include<string>
using namespace std;

struct CandyBar{
    string name;
    double weight;
    int calories;

};


int main(){
    CandyBar candy = {"mocha",2.3, 350};
    cout << "The name of the CandyBar: " << candy.name << "\n";
    cout << "The weight of the candy: " << candy.weight << "\n";
    cout << "The calories information: " << candy.calories << endl;

    CandyBar cnady_arr[3] = {
        {"mocha",2.3, 350},
        {"mocha",2.3, 350},
        {"mocha",2.3, 350}
    };
};

