#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
 
 
int divider(int n)
{
 
    if(n%2==0)  // even
    {
        int a= n/2;
        int b = a;
        cout << a << " " << b << endl;
    }
    else //odd
    {
 
 
        int a= n/2;
        int b = a+1;
        cout << a << " " << b << endl;
 
    }
 
 
}
int main()
{
    int t;
    cin >> t;
 
    vector <string> s(t);
 
 
    for(int i=0; i < t; i++)
    {
 
        cin >> s[i];
 
    }
    for(int i = 0; i < t; i++)
    {
        double number = stod(s[i]);
        double result = sqrt(number);
 
        if (floor(result) == result)
        {
            divider(result);
        }
        else
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}