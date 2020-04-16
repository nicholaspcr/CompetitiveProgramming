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

const int MOD = 1e9+7;

void solve(){	
    int n, m;
    cin >> n >> m;
    vi v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    vi dp(n+1, 0);
    dp[0] = 0;
    for(int i = 0; i < n; i++){
		if(i == 0){
			if(!v[i])
				dp[i] = 3;
		}else if(i == n-1){
			if(!v[i])
				dp[i] = 3 * dp[i-1];		
		}else{
			if(!v[i-1] && !v[i] && !v[i+1]){
				dp[i] = m*dp[i-1];
			}else if( (!v[i-1] && !v[i]) || (!v[i+1] && !v[i])){
				dp[i] = 3*dp[i-1];
			}
			
		}
		dp[i]%=MOD;
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    //int t; cin >> t;
    //while(t--) solve();
    //
    solve();
    return 0;
}
