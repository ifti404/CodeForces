#include <iostream>
#include <string>
using namespace std;
 
int main ()
{
    int lowcase=0,upcase=0;
    string s;
    cin >> s;
 
 
    for(char ch : s)
    {
        if(ch>= 'A' && ch<= 'Z')
        {
            upcase++;
        }
        else
        {
            lowcase++;
        }
    }
 
    if(upcase > lowcase)
    {
        for (char &ch : s)
        {
            ch = toupper(ch);
        }
 
    }
    else
    {
        for (char &ch : s)
        {
            ch = tolower(ch);
        }
    }
 
    cout << s;
    return 0;
}