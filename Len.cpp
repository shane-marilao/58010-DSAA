#include<iostream>
using namespace std;

int main()
{
    int num[] = {10, 5, 3, 7, 2, 8, 4, 1, 6, 9};

    int n = sizeof(num) / sizeof(num[0]);

    cout << "Length of the array: " << n << endl;

    return 0;
}
