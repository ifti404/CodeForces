#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
 
int main ()
{
    string s;
    int score= 0;
    cin >>s;
    sort(s.begin(),s.end());
 
    for (int i=0; i < s.length(); i++)
    {
        if(s[i]!= s[i+1])
        {
            score++;
        }
    }
 
    if (score%2==1)
    {
        cout << "IGNORE HIM!" << endl;
    }
    else
    {
        cout << "CHAT WITH HER!" << endl;
    }
return 0;
}
