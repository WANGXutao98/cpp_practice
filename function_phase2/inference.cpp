#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int &b = a;

    cout<<"b value "<<b<<endl;

    int rats = 10;
    int &rodents = rats;

    int bunnies = 50;
    rodents = bunnies;

    cout<<"bunnies value "<<bunnies<<endl;
    cout<<"rodents value "<<rodents<<endl;
    cout<<"rats value "<<rats<<endl;



    return 0;
}