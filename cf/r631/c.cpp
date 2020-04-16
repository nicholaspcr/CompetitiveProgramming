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
    int n, m; cin >> n >> m;
    vi painted(n+1);
    vpi v(m);
    for(int i = 0; i < m; i++) cin >> v[i].F, v[i].S = i;
    sort(v.rbegin(), v.rend());
    int op = n;    
    vi ans(m, 1);
    for(int i = 0; i < m; i++){
		op = op - v[i].F + 1;
		if(op < 0) op = 0;
		if(op <= 1){
			ans[v[i].S] = 1;
			painted[1] = 1;
		}else{			
			painted[op] = 1;
			ans[v[i].S] = op;
		}
	}
	if(!painted[1])
		cout << -1 << endl;
	else{
		for(auto it : ans)
			cout << it << " ";
		cout << endl;
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
