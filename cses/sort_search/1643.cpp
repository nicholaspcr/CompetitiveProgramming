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
 
void solve(){	
    int n; cin >> n;
    vector<ll> v(n);
    for(int i = 0; i < n; i++){
		cin >> v[i];
	}
	int pos = 0;
	ll ans = -1e9;
	ll best = v[0];
	for(int i = 0; i < n; i++){
		if(i > 0)
			best += v[i];
		max_self(ans,best);
		while(pos < i && (best < 0 || v[pos] < 0)){
			best -= v[pos];
			pos++;
		}
	}
	while(pos < n-1){
		best -= v[pos];
		pos++;
		max_self(ans, best);
	}
	cout << ans << endl;
}
 
int main(){
    //int t; cin >> t;
    //while(t--) solve();
    //
    solve();
    return 0;
}
