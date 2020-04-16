#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define all(x) x.begin(), x.end()

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pi;
typedef vector<pi> vpi;
typedef long long ll;

template <typename T> void max_self(T& a, T b){
	a = max(a,b);
}

const ll MOD = 1e9+7;

ll quick_exp(ll a, ll b){
    if(b == 0) return 1;
    ll ans = 1;
    ll op = quick_exp(a,b/2) % MOD;
    if(b&1){
        ans = a * op;
        ans %= MOD;
        ans = ans * op;
    }else{
        ans *= op;
        ans %= MOD;
        ans *= op;
    }
    ans %= MOD;
    return ans;
}

void solve(){	
    ll a, b;
    cin>>a>>b;
    cout << quick_exp(a,b) << endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    //
    //solve();
    return 0;
}
