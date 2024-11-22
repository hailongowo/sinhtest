#include <bits/stdc++.h>
#define int long long 

using namespace std;

const int maxn = 1e5 + 7, mod = 1e9 + 7;
int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, 1, -1, 0};
int n, a[maxn], k, dem[maxn], ans;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    // freopen (".INP", "r", stdin);
    // freopen (".OUT", "w", stdout);
    int n;
    cin >> n;
    vector <int> v;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
        if (!i){
            // cout << fixed << setprecision(1) << (double)(x * 1.0) << endl;
            continue;
        }
        int t = i;
        while(v[t] < v[t - 1]) {
            swap(v[t], v[t - 1]);
            t--;
            if (!t) break;
        }
        for (auto i:v) cout << i << ' ';
        cout << endl;
    }    
}