#include <iostream>
using namespace std;

void swap(int *p1, int *p2);
int swap_value(int v1, int v2);

int main()
{
    // 指针与常量
    //  int a = 100;
    //  int *p = &a;

    // const int *p = &a; // 常量指针, 指针指向的值不可以改，指向的变量可以改

    // int *const p1 = &a; // 指针常量， 指向的变量不能改，值可以改

    // const int *const p2 = &a; // 指针指向和值都不可以改

    // cout << "value of pointer p " << *p << endl;

    // 指针与数组
    // int arr[] = {1, 2, 3, 6, 7, 8};
    // int *p = arr;
    // int len = sizeof(arr) / sizeof(arr[0]);

    // for (int i = 0; i < len; i++)
    // {
    //     cout << *p << endl;
    //     p++;
    // }

    // 指针和函数
    int a = 10, b = 20;
    cout << "address a is " << &a << endl;

    int *p1 = &a;
    int value1 = *p1;
    cout << "value1 is " << value1 << endl;
    int &ref1 = a;
    int &ref2 = *p1;

    int ref3 = &&ref1;

    cout << "value p1 is " << p1 << endl;
    cout << "value ref1 is " << ref1 << endl;
    cout << "value ref2 is " << ref2 << endl;

    swap(&a, &b);
    cout << "value a is " << a << endl;

    int c = swap_value(a, b);
    cout << "value c is " << c << endl;

    // cout << "value d is " << d << endl;

    int var;
    int *ptr;
    int val;

    var = 3000;

    // 获取 var 的地址
    ptr = &var;

    // 获取 ptr 的值
    val = *ptr;
    cout << "Value of var :" << var << endl;
    cout << "Value of ptr :" << ptr << endl;
    cout << "Value of val :" << val << endl;
}

void swap(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int swap_value(int v1, int v2)
{
    int temp = v1;
    v1 = v2;
    v2 = temp;

    return v1;
}