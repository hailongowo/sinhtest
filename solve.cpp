#include <bits/stdc++.h>
#define int long long
using namespace std;


int subCount(int arr[], int n, int k) 
{ 
    int mod[k]; 
    memset(mod, 0, sizeof(mod)); 
    int cumSum = 0; 
    for (int i = 0; i < n; i++) { 
        cumSum += arr[i]; 

        mod[((cumSum % k) + k) % k]++; 
    } 
  
    int result = 0; // Initialize result 
  
    // Traverse mod[] 
    for (int i = 0; i < k; i++) 
        if (mod[i] > 1) 
            result += (mod[i] * (mod[i] - 1)) / 2; 
    result += mod[0]; 
  
    return result; 
} 

void program(){
    int n, k;
    cin >> k >> n;
    int a[n + 1];
	
	for(int i = 1; i <= n; i++) cin >> a[i];
    cout << subCount(a, n, k);
	
}

signed main(){
    for (int test = 1; test <= 10; test++) {
        string inp = to_string(test) + ".inp";
        string out = to_string(test) + ".out";
        freopen(inp.c_str(), "r", stdin);
        freopen(out.c_str(), "w", stdout);
        program();
    }
}