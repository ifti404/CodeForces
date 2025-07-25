//144A - Arrival of the General
 
#include <iostream>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
 
    int arr[n];
    int maxVal = -1, minVal = 101;
    int maxPos = 0, minPos = 0;
 
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
 
        if (arr[i] > maxVal)
        {
            maxVal = arr[i];
            maxPos = i;
        }
 
        if (arr[i] <= minVal)
        {
            minVal = arr[i];
            minPos = i;
        }
    }
 
    if (maxPos > minPos)
    {
        minPos++;
    }
 
    int moves = maxPos + (n - 1 - minPos);
    cout << moves;
 
    return 0;
}