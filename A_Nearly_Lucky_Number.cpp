#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    int count = 0;
    string n;
    cin >> n;
 
    for (char c : n)
    {
 
        if (c == '4' || c == '7')
        {
            count++;
        }
    }
    if (count == 4 || count == 7)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}