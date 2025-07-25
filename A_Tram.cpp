#include <iostream>
using namespace std;
 
int main()
{
    int stops, out, in, sum = 0,max_capacity = 0;
    cin >> stops;
 
    for (int i = 0; i < stops; i++)
    {
        cin >> out >> in;
        sum += in;
        sum -= out;
        if(sum > max_capacity){
            max_capacity = sum;
        }
    }
 
    cout << max_capacity;
 
    return 0;
}