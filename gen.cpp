#include <bits/stdc++.h>

#define int long long
#define endl "\n"

using namespace std;

const int mod = 1e5;
const int maxn = 1e5;
mt19937 rng(time(nullptr));

void program(){
    int n = rand()%maxn + 1, q = rand()%n;

    cout << n << ' ' << q << endl;
    for (int i = 1; i <= n; i++){
        cout << rand()%3 + 1 << ' ';
    }
    cout << endl;
    for (int i = 1; i <= q; i++){
        int l = rand()%n + 1, r = rand()%n + 1;
        if (l > r) swap(l, r);
        cout << l << ' ' << r << endl;
    }
}
signed main(){
    srand(time(0));
    for (int test = 6; test <= 10; test++) {
        string path = to_string(test) + ".inp";
        freopen(path.c_str(), "w", stdout);
        program();
    }
}