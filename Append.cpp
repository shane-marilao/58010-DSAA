#include<iostream>
using namespace std;

int main()
{
    int num[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i = 0;
    int n = 10;
    cout << "Append Algorithm" << endl;
    
    for (i = 0; i < n; i++)
    {
        cout << "num[" << i << "]=" << num[i] << endl; // Print the array element num[i]
    }
    
    return 0;
}
