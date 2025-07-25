#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    int n, anton = 0, danik = 0;
    string s;
    cin >> n >> s;
 
    for (char c : s)
    {
        if (c == 'A')
        {
            anton++;
        }
        else
        {
            danik++;
        }
    }
 
    if (anton > danik)
    {
        cout << "Anton";
    }
    else if (anton < danik)
    {
        cout << "Danik";
    }
    else
        cout << "Friendship";
 
    return 0;
}