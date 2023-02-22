#include <iostream>
using namespace std;

void print(int arr[], int n)
{
    cout<<"The size is "<<n<<endl;

    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
}
bool ispresent(int arr[], int size, int key)
{
    print(arr,size);
    if(size==0)
    {
        return false;
    }
    if (arr[0] == key)
        return true;
    else
    {
        bool hi = ispresent(arr + 1, size - 1, key);
        return hi;
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int key = 5;
    bool ans = ispresent(arr, size, key);

    if (ans)
    {
        cout << "Key is present" << endl;
    }
    else
    {
        cout << "Key is absent" << endl;
    }
    return 0;
}