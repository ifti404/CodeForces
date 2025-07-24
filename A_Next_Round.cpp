#include <iostream>
using namespace std;
 
int main()
{
    int n,k,accepted=0, limit;
    int arr[100];
    cin >> n >> k;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    limit = arr[k - 1];
    for (int i = 0; i < n; i++){
      if(arr[i]>= limit && arr[i]>0){
          accepted++;
      }
    }
    cout << accepted << endl;
    return 0;
}