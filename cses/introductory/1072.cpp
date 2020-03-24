#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define INF 0x3f3f3f3f
#define MAXN 10001

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pi;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<pi> vpi;

ll memo[MAXN];
ll solve(int t){
    if(t <= 2) return memo[2] = 6;
    if(memo[t]) return memo[t];
    ll ans = 0;
    for(int i = 0; i < t+t-1; i++)
        ans += 1 + solve(t-1);

    return memo[t] = ans;
}

int main(){
    memset(memo, 0, sizeof memo);
    int t; cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    for(int i = 1; i <= t; i++) cout << memo[i] << " ";
    cout << endl;
    //
    //solve();
    return 0;
}
