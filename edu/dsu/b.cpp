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

	template <typename T> void min_self(T& a, T b){
		a = min(a,b);
	}

	int get(vi &v, int x){	
		return v[x]  = (v[x] == x) ? x : get(v, v[x]);
	}

	void union(vi &v, vi &r, int a, int b){
		a = get(v,a);
		b = get(v,b);
		
		if(r[a] == r[b])
			r[a]++;
		if(r[a] > r[b])
			v[b] = a;
		else
			v[a] = b;		
	}

	void solve(){	 
		int n, m;
		cin>>n>>m;
		vi v(n+1);
		vi r(n+1);
		for(int i=0;i<=n;i++)
			v[i] = i, r[i] = 1;
	
		while(m--){
			string str;			
			cin>>str;
			if(str == "union"){
				int a, b; cin>>a>>b;				
				union(v, r, a,b);
			}else{
				int a; cin>>a;
				
			}
			
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
