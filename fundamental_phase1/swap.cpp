#include <iostream>
#include "swap.h"

void swap(int a, int b)
{
    using namespace std;
    int temp = a;
    a = b;
    b = temp;

    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
}
