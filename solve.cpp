#include <bits/stdc++.h>
#define int long long
using namespace std;


void program(){
    int n, q1, q2;
    cin >> n >> q1 >> q2;
    int chan[n], le[n];
    for (int i = 0; i <= n; i++){
        chan[i] = 0;
        le[i] = 0;
    }
    for (int i = 1; i <= q1; i++){
        int a, l, r, x;
        cin >> a >> l >> r >> x;
        if (a == 2){
            if (l == r && !r%2) continue;
            if (!l%2) l++;
            if (!r%2) r--;
            l = l/2 + 1;
            r = r/2 + 1;
            le[l] += x;
            le[r + 1] -= x;
        }
        else if (a == 1){
            if (l == r && r%2) continue;
            if (l%2) l++;
            if (r%2) r--;
            l = l/2;
            r = r/2;
            chan[l] += x;
            chan[r + 1] -= x;
        }
    }

    for (int i = 0; i <= n; i++) cout << chan[i] << ' ';
    cout << endl;
    for (int i = 0; i <= n; i++) cout << le[i] << ' ';
    cout << endl;

    int sum = 0;
    vector <int> day1, day2, daytong;
    for (int i = 0; i <= n/2; i++){
        sum += chan[i];
        day2.push_back(sum);
    }

    sum = 0;
    for (int i = 0; i <= n/2 + n%2; i++){
        sum += le[i];
        day1.push_back(sum);
    }

    for (int i = 1; i <= n; i++){
        int idx = i/2 + i%2;
        if (i%2) daytong.push_back(day1[idx]);
        else daytong.push_back(day2[idx]);
    }
    
    int tong[n + 1];
    tong[0] = 0;
    for (int i = 1; i <= n; i++) tong[i] = tong[i - 1] + daytong[i - 1];
    for (int i = 1; i <= q2; i++){
        int l, r;
        cin >> l >> r;
        cout << tong[r] - tong[l - 1] << endl;
    }
    
}

signed main(){
    for (int test = 5; test <= 5; test++) {
        string inp = to_string(test) + ".inp";
        string out = to_string(test) + ".out";
        freopen(inp.c_str(), "r", stdin);
        freopen(out.c_str(), "w", stdout);
        program();
    }
}