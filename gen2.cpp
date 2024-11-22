#include <bits/stdc++.h>

#define int long long
#define endl "\n"

using namespace std;

const int mod = 1e5;
const int maxn = 1e6;
mt19937 rng(time(nullptr));

void program(){
    int n = rand()%5 + 1, q1 = rand()%5 + 1, q2 = rand()%5 + 1;

    cout << n << ' ' << q1 << ' ' << q2 << endl;
    for (int i = 1; i <= q1; i++){
        cout << rand()%2 + 1 << ' ';
        int l = rand()%n + 1, r = rand()%n + 1;
        if (l > r) swap(l, r);
        cout << l << ' ' << r << ' ' << rand()%10 + 1 << endl;
    }
    for (int i = 1; i <= q2; i++){
        int l = rand()%n + 1, r = rand()%n + 1;
        if (l > r) swap(l, r);
        cout << l << ' ' << r << endl;
    }
}
signed main(){
    srand(time(0));
    for (int test = 1; test <= 5; test++) {
        string path = to_string(test) + ".inp";
        freopen(path.c_str(), "w", stdout);
        program();
    }
}