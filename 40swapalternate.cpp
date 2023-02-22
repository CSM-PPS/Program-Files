#include <iostream>
using namespace std;

int printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void swapalter(int arr[], int n)
{
    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 < n)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}
int main()
{
    int n;
    int even[6] = {3, 4, 5, 6, 7, 8};
    int odd[5] = {5, 8, 7, 9, 10};

    swapalter(even, 6);
    swapalter(odd, 5);

    printarray(even, 6);
    printarray(odd, 5);

    return 0;
}