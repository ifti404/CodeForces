#include <iostream>
using namespace std;
 
int main()
{
    int n, block = 1;
    string current, previous;
    cin >> n;
    cin >> previous;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> current;
        if (current != previous)
        {
            block++;
            previous = current;
        }
    }
    cout << block;
    return 0;
}