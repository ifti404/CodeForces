#include <iostream>
using namespace std;
 
int main()
{
    int n;
    int sum = 0;
    string operation;
    cin >> n;
 
    for (int i = 0; i < n; i++)
    {
        cin >> operation;
        if(operation == "X++" || operation == "++X"){
            sum++;
        } else
            sum--;
    }
    cout << sum;
    return 0;
}