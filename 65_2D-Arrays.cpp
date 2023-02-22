#include <iostream>
#include<bits./stdc++.h>
using namespace std;

bool ispresent(int arr[][3], int target, int row, int col)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == target)
                return 1;
        }
    }
    return 0;
}

void printsum(int arr[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        cout << sum << " ";
    }
    cout << endl;
}

int largestrowsum(int arr[][3], int row , int col)
{
    int maxi = INT_MIN;
    int rowindex = -1;

    for(int row = 0; row < 3; row++)
    {
        int sum = 0;
        for(int col = 0 ; col < 3; col++)
        {
            sum += arr[row][col];
        }
        if(sum  > maxi)
        {
            maxi = sum ;
            rowindex = row;
        }
    }
    cout<<"The maximum sum is "<<maxi<<endl;
    return rowindex;
}


int main()
{
    // create 2d arrays
    //  i = row j = colomn
    int arr[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int target;
    cout << "Enter the target " << endl;
    cin >> target;
    if (ispresent(arr, target, 3, 3))
        cout << "Element found " << endl;

    else
    {
        cout << "Element not found " << endl;
    }

    printsum(arr, 3, 3);

    cout<<"Index of the maximum row sum is  "<<largestrowsum(arr,3,3)<<endl;


    return 0;
}