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

void solve(){	 
	int n; cin>>n;
	vi v(n);
	for(int i=0;i<n;i++)cin>>v[i];
	sort(all(v));		
	int k; cin>>k;
	while(k--){
		int a, b;
		cin>>a>>b;
		int l[2] = { -1, -1 };
		int r[2] = { n, n };
		// first bs
		while( r[0] > l[0] + 1 ) {
			int m = (l[0] + r[0])/2;
			if( v[m] < a )
				l[0] = m;
			else
				r[0] = m;
		}
		// second bs
		while( r[1] > l[1] + 1 ) {
			int m = (l[1] + r[1])/2;
			if( v[m] <= b )
				l[1] = m;
			else
				r[1] = m;
		}
		
		//cout<<l[0]<<" "<<l[1]<<" "<<r[0]<<" "<<r[1]<<endl;
		//cout<<l[0]+1<<" "<<r[1]+1<<endl;
		ll ans = r[1] - (l[0]+1);
		//cout<<l[0]<<" "<<r[1]<<endl;
		cout<<ans<<endl;
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
