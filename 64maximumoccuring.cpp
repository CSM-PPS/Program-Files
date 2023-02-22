#include<iostream>
#include<string>
#include<bits./stdc++.h>
using namespace std;

char getmaxOccchar(string s)
{
    int arr[26] = {0};
    for(int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int number = ch - 'a';
        arr[number]++;
    }
    int maxi = -1,ans = 0;
    for(int j = 0 ; j < 26; j++)
    {
        if(maxi < arr[j])
        {
            ans = j;
            maxi = arr[j];
        }
    }
    return 'a' + ans;
}
int main()
{
    string s;
    cin >> s;
    cout<<getmaxOccchar(s)<<endl;
    return 0;
}