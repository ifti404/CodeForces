#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int pos;
    string target = "WUB";
    while ((pos = s.find(target)) != string::npos)
    {
        s.replace(pos, target.size(), " ");
    }
    cout << s;
}
