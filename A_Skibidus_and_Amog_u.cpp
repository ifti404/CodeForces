#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        int len = s.size();
        s.replace(len - 2, 2, "i");
        cout << s << endl;
    }
}