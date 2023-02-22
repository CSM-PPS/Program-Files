#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int arr[13] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    for (int i = 0; i < 13; i++)
    {
        sum = sum + arr[i];
    }
    cout << sum << endl;
    return 0;
}