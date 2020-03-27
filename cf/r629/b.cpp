#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define all(x) x.begin(), x.end()
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define INF 0x3f3f3f3f

using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pi> vpi;

void solve(){
	int n, k;
	cin >> n >> k;
	k--; n--;
	string ans = "";
	for(int i = 0; i <= n; i++) ans += 'a';	
	int op = 0;
	for(int i = 1; i < 1e9; i++){
		if(op + i > k){
			k -= op;
			op = i;
			break;
		}
		op += i;
	}
	
	//cout << op << " " << k << endl;

	ans[n-op] = 'b';
	ans[n-k] = 'b';
	
	cout << ans << endl;
}

int main() {
    int t; cin >> t;
    while(t--) solve();

    //solve();
    return 0;
}
