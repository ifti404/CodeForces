//443A - Anton and Letters
 
#include <iostream>
#include <set>
using namespace std;
 
int main()
{
    int count=0;
 
    string s;
    getline(cin, s);
 
    set <char> chara;
 
    for(char x: s)
    {
        chara.insert(x);
    }
    for(char x: chara)
    {
        if(x!='{' && x!='}' && x!=' ' && x!=',')
        {
            count++;
        }
 
 
    }
    cout << count;
    return 0;
 
}