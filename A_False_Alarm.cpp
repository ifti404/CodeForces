#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    vector<string> results;
 
    while (t--){
        int n, x;
        cin >> n >> x;
        int ar[n];
 
    for (int i = 0; i < n; i++){
            cin >> ar[i];
        }
 
    int l = -1, r = -1;
    for (int i = 0; i < n; i++){
            if (ar[i] == 1)
            {
                if (l == -1) l = i;
                r = i;
            }
        }
 
        if (l == -1 || r - l + 1 <= x){
            results.push_back("YES");
        }
 
        else {
             results.push_back("NO");
        }
 
    }
 
    for (auto& res : results){
        cout << res << '\n';
    }
    return 0;
}