#include <bits/stdc++.h>

#define int long long
#define endl "\n"

using namespace std;

const int mod = 1e9;
const int maxn = 1e6;
mt19937 rng(time(nullptr));

void program(){
    int n = rand()%maxn + 2, k = rng()%1000;
    cout << k << ' ' << n <<endl;
    for (int i = 1; i <= n; i++){
        cout << rng()%mod + 1 << ' ';
    }
    cout << endl;
}
signed main(){
    srand(time(0));
    for (int test = 6; test <= 10; test++) {
        string path = to_string(test) + ".inp";
        freopen(path.c_str(), "w", stdout);
        program();
    }
}