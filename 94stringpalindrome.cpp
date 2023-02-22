#include<iostream>
using namespace std;

bool ispalindrome(string str, int i , int j)
{
    if(i>j){
        return true;
    }
    if(str[i]!=str[j])
    {
        return false;
    }
    else{
        return ispalindrome(str,i+1,j-1);
    }
}
int main(){
    
    string s = "abbaaebba";
    bool ans = ispalindrome(s,0,s.length()-1);

    if(ans){
        cout<<"It is a palindrome"<<endl;
    }
    else{
        cout<<"Not a palindrome"<<endl;
    }
    return 0;
}