//	469A - I Wanna Be the Guy
 
#include <iostream>
#include <set>
using namespace std;
 
int main()
{
    int n, littleX, littleY, lvl;
    cin >> n;
    set<int> levels;
 
    cin >> littleX;
    for (int i = 0; i < littleX; i++)
    {
        cin >> lvl;
        levels.insert(lvl);
    }
    cin >> littleY;
    for (int i = 0; i < littleY; i++)
    {
        cin >> lvl;
        levels.insert(lvl);
    }
 
    if (n == levels.size())
    {
        cout << "I become the guy.";
    }
    else
    {
        cout << "Oh, my keyboard!";
    }
    return 0;
}