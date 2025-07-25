#include <iostream>
#include <string>
using namespace std;
 
int main ()
{
    int n, attempts=0;
    string s;
    cin >> n >> s;
 
    for (int i=0; i < n; i++)
    {
        if(s[i]==s[i+1]){
            attempts++;
        }
    }
 
 
cout << attempts;
    return 0;
}