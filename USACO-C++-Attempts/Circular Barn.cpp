// Source: https://usaco.org/index.php?page=viewproblem2&cpid=616

#include <bits/stdc++.h>
using namespace std;
#include <climits>

int main(){
    int n;
    cin >> n;
    int rooms[n];
    for(int i = 0; i < n; i++) 
        cin >> rooms[i];
    long long ans = LLONG_MAX;


    for(int start = 0; start < n; start++){
        long long cost = 0;
        for(int i = 0; i < n; i++){
            int idx = (start + i) % n;
            cost += rooms[idx] * i;
        }
        ans = min(ans, cost);
    }

    cout << ans << "\n";
    return 0;
}
