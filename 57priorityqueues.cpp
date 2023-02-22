#include <iostream>
#include <queue>
using namespace std;
int main()
{

    // creating max heap
    priority_queue<int> maxi;

    // creating min heap
    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(1);
    maxi.push(3);
    maxi.push(9);
    maxi.push(2);

    cout << "Size entha ra ->" << maxi.size() << endl;
    int n = maxi.size();
    for (int i = 0; i < n; i++)
    {
        cout << maxi.size() << " ";
        maxi.pop();
        ;
    }
    cout << endl;

    mini.push(3);
    mini.push(9);
    mini.push(1);
    mini.push(5);

    int m = mini.size();
    for (int i = 0; i < m; i++)
    {
        cout << maxi.size() << " ";
        maxi.pop();
        ;
    }
    cout << endl;

    cout << "Khali hai kya ->" << mini.empty() << endl;

    return 0;
}