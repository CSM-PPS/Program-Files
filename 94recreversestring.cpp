#include <iostream>
#include <string>
using namespace std;

void reverse(string &str, int i, int j)
{
    if (i > str.length() - i + 1)
        return;

    swap(str[i], str[j]);
    i++;
    j--;

    reverse(str, i, j);
}

int main()
{
    string name = "sai shankar";

    reverse(name, 0, name.length() - 1);
    cout << name << endl;
    return 0;
}