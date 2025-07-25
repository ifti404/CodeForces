#include <iostream>
#include <set>
using namespace std;
 
int main()
{
    int s1, s2, s3, s4, result = 0;
    cin >> s1 >> s2 >> s3 >> s4;
    
    set<int> horshoe;
    horshoe.insert(s1);
    horshoe.insert(s2);
    horshoe.insert(s3);
    horshoe.insert(s4);
 
    result = 4 - horshoe.size();
 
    cout << result;
 
    return 0;
}