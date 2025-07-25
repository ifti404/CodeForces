// 	705A - Hulk
 
#include <iostream>
#include <string>
using namespace std;
 
int main()
{
 
    int n;
    string love, hate, mid, end;
    love = "I love ";
    hate = "I hate ";
    mid = "that ";
    end = "it";
 
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            cout << hate;
            if (i != n)
            {
                cout << mid;
            }
        }
        else if (i % 2 == 0)
        {
 
            cout << love;
            if (i != n)
            {
                cout << mid;
            }
        }
    }
    cout << end;
}