#include <bits/stdc++.h>

#define int long long
#define endl "\n"

using namespace std;

const int mod = 1e5;
const int maxn = 1e6;
mt19937 rng(time(nullptr));

void program(){
    int n = rand()%20 + 2, k = rand()%30;
    cout << k << ' ' << n <<endl;
    for (int i = 1; i <= n; i++){
        cout << rand()%50 + 1 << ' ';
    }
    cout << endl;
}
signed main(){
    srand(time(0));
    for (int test = 1; test <= 5; test++) {
        string path = to_string(test) + ".inp";
        freopen(path.c_str(), "w", stdout);
        program();
    }
}