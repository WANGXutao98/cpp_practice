#include <iostream>
using namespace std;
#include "swap.h"

int main()
{
    int arr[9] = {2, 3, 4, 5, 67, 6, 7, 8, 3};

    int len = sizeof(arr) / sizeof(arr[0]);

    // cout << sizeof(arr) / sizeof(arr[0]) << endl;

    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            int temp = 0;
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << endl;
    }
}
